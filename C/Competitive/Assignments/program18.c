// 
//          
//
//
//
//
///


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
 *      Factors of the number and their multiplication with decreasing order
 *
 *  Author       : Sahil Shaikh
 *  Date         : 31/05/2026
 *  Version      : 1.0
 *
 * 
 ******************************************************************************/
#include<stdio.h>


int  MultiplyFactor(int iNo)
{
       int iCnt =0;
       int iMul = 1;

       for( iCnt =1 ; iCnt<iNo ;iCnt++)
       {
              if( iNo %iCnt ==0)
              {
                             iCnt
              }
       }
       
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