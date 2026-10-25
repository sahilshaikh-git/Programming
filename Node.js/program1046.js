function CountSmall(Str)
{
       let iCount =  0
       for( let i= 0 ; i< Str.length ; i++)
       {
              
              if(Str[i] >= 'a' && Str[i]<='z')
              {
                     iCount++ ;

              }
              
              
       }

       return iCount
}



function main()
{  
       let name = "MaDDDrvellous"
       iRet = 0 ;

        iRet = CountSmall(name)

        console.log("Small character are ",  iRet);
        


}

main();

