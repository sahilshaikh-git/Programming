
"use client";


import { use, useState } from "react" ;


export default function Home() {
  
         const [url , setUrl] = useState("");
         const [ shortUrl , setShortUrl] =useState("");
         const [error ,setError] = useState("");

         const characters =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

         
       
         function shortenurl () 
          {

            if(url ==="")
            {
              setError("Please enter a URL ");
              
              return ;
            }

            try
            {
              const validUrl = new URL(url);
              setError("");

            }
            catch
            {
              setError("Invalid URL");
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
                      <p>{shortUrl}</p>
            </div>
  



  );
}
