function Summation(Arr)
{
       let  iSum=0  , i =0 

       for ( i = 0 ; i< Arr.length ; i++ ) 
       {
              iSum = iSum+ Arr[i]; 

       }

       return iSum

}

function main()
{  
  
       Arr= [10,20,30,40]

       iRet  = 0 ;

       iRet = Summation(Arr)

       console.log("Summation is " , iRet);

}

main();

