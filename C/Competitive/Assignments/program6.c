// ////////////////////////////////////////////////////////////////////////////////
//
//         Accept one number from the user and print the number of * on screen
//
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void display ( int iNo)
{
       int iCnt = 0;

       // write updater
       while (iCnt <iNo)
       {
              printf("*\n");
              iCnt++;
       }
}
int main( )
{
       int iValue =0;
       printf("Enter the Number : ");
       scanf("%d", &iValue);

       display(iValue);

       return 0 ;
}