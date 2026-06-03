       // factorial of the number
       
       #include <stdio.h>

       int Factorial (int iNo)
       {
              int iCnt = 0 ;
              int iFact= 1 ;
              if(iNo<0)
              {
                     iNo = -iNo;
              }

              for ( iCnt = 1  ; iCnt <=iNo ; iCnt++)
              {
                     iFact  = iFact * iCnt ;
              }
              return iFact ;
       }
       int main ()
       {
                     int iValue = 0;
                     int iRet = 0 ; 
              printf("Enter the Number : ");
              scanf("%d", &iValue);

              iRet = Factorial(iValue);

              printf("Factorial of a numeber %d is %d\n", iValue,iRet);

              return 0 ;
       }