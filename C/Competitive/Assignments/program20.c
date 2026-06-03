/******************************************************************************
 *
 *  Program Name : Multiplication of Factors
 *  File Name    : multiplication_of_factors.c
 *
 *  Description  :  Write the program which accept the number and displsy factor in decreasing Order
 *
 *  Input        :
 *      Integer number from the user
 *
 *  Output       :
 *      NonFactor of number
 *
 *  Author       : Sahil Shaikh
 *  Date         : 31/05/2026
 *  Version      : 1.0
 *
 * 
 ******************************************************************************/
#include<stdio.h>


int  NonFactorSum(int iNo)
{
       int iCnt =0;
       int iSum = 0;

       for( iCnt =1; iCnt<=iNo ; iCnt++)
       {
              if( iNo %iCnt !=0)
              {
                     
                             iSum = iSum + iCnt ;
              }
       }
       return  iSum;
       
}
int main()
{
       int iVlaue = 0 ;
       int iRet = 0;
       
       printf("Enter the Number : ");
       scanf("%d", &iVlaue);

        iRet = NonFactorSum(iVlaue);


       printf("Summation of Non Factor :%d " , iRet);


       return 0 ;
}