
function check_even(no)
{
       if(no%2 ==0)
       {
              return true 
              
       }
       else
       {
              return false
              
       }
}

function main()
{      
       let value = 10
       let value2 = 20
       let bRet = false

        bRet =check_even(value)

        if(bRet==true)
        {
              console.log(`${value} is even`);
              
        }
        else
        {
              console.log(`${value} is odd`);
              
        }

}

main();

