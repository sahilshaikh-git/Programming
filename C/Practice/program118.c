#include <stdio.h>

int Summation(int Arr[], int iSize)
{ 


               int iSum = 0;
               int iCnt =0 ;
               for( iCnt = 0 ; iCnt <iSize ;iCnt++)
               { 
               iSum = iSum + Arr[iCnt]; 
               }

               return iSum;

          
}

int main()
{
   int iLength = 4;
   int Brr[iLength];
   int iRet = 0;
   

   printf("Enter the element :\n");

   for (int iCnt = 0 ; iCnt < iLength ; iCnt ++)
   {
    scanf("%d",& Brr[iCnt]);
   }


    iRet = Summation(Brr,iLength);
    printf("Addition of all element : %d\n" ,iRet );
   return 0;
}
