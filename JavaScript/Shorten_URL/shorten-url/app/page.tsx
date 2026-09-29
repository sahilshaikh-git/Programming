
"use client";


import { useState } from "react" ;


export default function Home() {
  
         const [url , setUrl] = useState("");
         const [ shortUrl , setShortUrl] =useState("");
         const [error ,setError] = useState("");
         const[ copied , setCopied] = useState(false);

         const characters =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

         
       
         function shortenurl () 
          {

            if(url ==="")
            {
              setError("Please enter a URL ");
              setShortUrl("");
              
              return ;
            }

          
            try
            {
              const validUrl = new URL(url);

              if( validUrl.protocol !== "http:" && validUrl.protocol !== "https:" )
              {

                setError("Only https and http are allowed");
                setShortUrl("");
                return ;

              }

                setError("");

            }
            catch
            {
              setError("Invalid URL");
              setShortUrl("");

              return ;
            }


         let shortCode = "";
         let i =1 ;
         while(i<= 6)
         {
                  shortCode = shortCode +(characters[Math.floor(Math.random() * characters.length)]);
                  i++ ;
         }

         setShortUrl(shortCode);

        

         }

          function copyUrl() {

         if (shortUrl === "") {
        return;
        }

        const fullUrl =  "https://localhost:3000"+ shortUrl ;

        navigator.clipboard.writeText(fullUrl)
        .then(() => {
         console.log("Copied successfully");
          setCopied(true);
          })
          .catch((error) => {
      console.log("Copy failed");
      console.log(error);
    });
}


  return (

            <div>
                    <h1>Shorten URL</h1>

                     <input
                      type="text" 
                      placeholder="Enter your long URL"
                      onChange={(e)=>setUrl(e.target.value)}

                      />
                      <p>{error}</p>

                      <button  onClick={shortenurl}>Shorten URL</button>
                      {shortUrl && (<p>http://localhost:3000/{shortUrl}</p>)}
                       { shortUrl && ( <button onClick={copyUrl}>{copied ? "copied !!": "copy"}</button> )}
            </div>
  



  );
}
