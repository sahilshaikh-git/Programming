
"use client";


import { useState } from "react" ;


export default function Home() {
  
         const [url , setUrl] = useState("");

         const Character =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

         let shortCode = "";

         let i =1 ;

         while(i<= 6)
         {
                  shortCode.push(Character[Math.floor(Math.random()* Character.length)]);
                  i++ ;
         }

  return (

            <div>
                    <h1>Shorten URL</h1>

                     <input
                      type="text" 
                      placeholder="Enter your long URL"
                      onChange={(e)=>setUrl(e.target.value)}

                      />

                      <button  onClick={()=> console.log(url)}>Shorten URL</button>
            </div>
  



  );
}
