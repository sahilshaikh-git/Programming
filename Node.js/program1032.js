
function check_even(no)
{
       return (no % 2 == 0)
}

function main()
{      
       let value = 10
       let value2 = 20
       let bRet = false

        bRet =check_even(value)

        if(bRet)
        {
              console.log(`${value} is even`);
              
        }
        else
        {
              console.log(`${value} is odd`);
              
        }

}

main();

