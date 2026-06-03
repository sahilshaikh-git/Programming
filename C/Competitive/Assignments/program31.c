// print the table  in reverse order
  
  #include <stdio.h>

       void RevTable(int iNo)
       {
              int iCnt = 0 ;
              int iFact= 1 ;
              if(iNo<0)
              {
                     iNo = -iNo;
              }

              for ( iCnt = 10  ; iCnt >=1; iCnt--)
              {
                     printf("%d\n" ,iNo*iCnt);

              }
              
              
       }
       int main ()
       {
               int iValue = 0;
              printf("Enter the Number : ");
              scanf("%d", &iValue);
              RevTable(iValue);
              return 0 ;
       }