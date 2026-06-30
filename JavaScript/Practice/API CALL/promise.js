

const promise = new Promise((resolve)=>
{
       setTimeout(() => {
              resolve("burger is ready")
              
       }, 3000);
})

promise.then((message)=>{
       console.log(message);
})

console.log("now :", promise);

setTimeout(()=>{
       console.log(" After 4 second : ", promise )
}, 4000)