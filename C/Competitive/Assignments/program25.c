// Write the program to accept the number and print all odd number upto the N
//            input :  18
//            output : 1    3      5      7      9      11     13     15     17

#include<stdio.h>


void DisplayOddNumber(int  iNo)
{      
       int iCnt = 0 ;
       for( iCnt =1 ; iCnt <= iNo; iCnt++)
       {
              if(iCnt%2 !=0)
              {
                     printf("%d\t" , iCnt);
              }
       }
}
int main ()
{
        int iValue = 0 ;
       printf("Enter the NUmber  :  " );
       scanf( "%d", & iValue );
       DisplayOddNumber(iValue);

       return 0 ;
}