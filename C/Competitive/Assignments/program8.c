///////////////////////////////////////////////////////////////////////////
//
//            Accept two number from the user and display first number second number times
//
//
//////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void display ( int iNo , int iFrequency)
{
       int iCnt = 0;

       for( iCnt =1 ; iCnt<= iFrequency ; iCnt++)
       {
              printf("%d ", iNo);
       }
}

int main()
{
       int iValue = 0 ;
       int iCount = 0;


       printf("Enter the number :  ");
       scanf("%d", &iValue);

       printf("Enter the Frequency  : ");
       scanf("%d" , &iCount);

       display(iValue , iCount);

       return 0 ;
}