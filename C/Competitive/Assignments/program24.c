// Write the program to accept the number sisply it number line 
//            input :  4
//            output : -4   -3     -2     -1     0      1      2      3      4

#include<stdio.h>


void DisplayNumberlIne(int  iNo)
{      
       int iCnt = 0 ;
       for( iCnt =-iNo ; iCnt <= iNo; iCnt++)
       {
              printf("%d\t", iCnt);
       }
}
int main ()
{
        int iValue = 0 ;
       printf("Enter the NUmber  :  " );
       scanf( "%d", & iValue );
       DisplayNumberlIne(iValue);

       return 0 ;
}