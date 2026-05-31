#include<stdio.h>


int  MultiplyFactor(int iNo)
{
       int iCnt =0;
       int iMul = 1;

       for( iCnt =1 ; iCnt<iNo ;iCnt++)
       {
              if( iNo %iCnt ==0)
              {
                     iMul = iMul * iCnt ;
              }
       }
       return iMul;
}
int main()
{
       int iVlaue = 0 ;
       int iRet = 0;
       
       printf("Enter the Number : ");
       scanf("%d", &iVlaue);

       iRet = MultiplyFactor(iVlaue);

       printf("Multiplication of Factor :%d " , iRet);


       return 0 ;
}