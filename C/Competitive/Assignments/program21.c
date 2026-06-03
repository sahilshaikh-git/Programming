/******************************************************************************
 *
 *  Program Name : Multiplication of Factors
 *  File Name    : multiplication_of_factors.c
 *
 *  Description  :  write program from the user and print diff of summation of factor and nonfactor
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
       int iFactSum = 0;
       int iNonFactSum = 0;

       for( iCnt =1; iCnt<=iNo /2; iCnt++)
       {
              if( iNo %iCnt ==0)
              {
                     
                             iFactSum = iFactSum + iCnt ;
              }
              else 
              {      
                     iNonFactSum = iNonFactSum + iCnt ;

              }
       }
       return  iFactSum- iNonFactSum;     
       
}
int main()
{
       int iValue = 0 ;
       int iRet = 0;
       
       printf("Enter the Number : ");
       scanf("%d", &iValue);

        iRet = NonFactorSum(iValue);


       printf("Difference of Fact and NonFact :%d " , iRet);


       return 0 ;
}