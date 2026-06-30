//
// create the first demonstration promise

const promise =  new Promise((resolve)=>
{
       setTimeout(() =>
       {
              resolve("burger ready ");
              
       }, 3000);

}

);
console.log(promise); 

promise.then((result)=>
{
       console.log(result)

})
console.log(promise);