// Write the program to accept the number and print first 5 multiple of the number
//            input :  18
//            output : 1    3      5      7      9      11     13     15     17

#include<stdio.h>


void MultipleDisplay(int  iNo)
{      
       int iCnt = 0 ;
       for( iCnt =1 ; iCnt <= 5; iCnt++)
       {
             printf(" %d",iNo*iCnt);
       }
}
int main ()
{
        int iValue = 0 ;
       printf("Enter the NUmber  :  " );
       scanf( "%d", & iValue );
       MultipleDisplay(iValue);

       return 0 ;
}