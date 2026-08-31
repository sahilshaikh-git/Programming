
const express = require("express");

const app = express();

const PORT = 3000;

app.use(express.json());

app.get("/", (req, res) => {
    res.send("TinyLink Backend is running!");
});

app.listen(PORT, () => {
    console.log(`Server running on http://localhost:${PORT}`);
});



app.post("/shorten" ,( req , res)=>{

       const  longUrl =  req.body.url ;
       
       console.log("Received Url : "  , longUrl);


       res.json ({
              message : " URL received successfully ",
              url : longUrl 
       });
});
