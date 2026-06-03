// Write the program to accept the number display upto n number  

#include<stdio.h>


void Display(int  iNo       )
{      
       int iCnt = 0 ;
       for( iCnt =1 ; iCnt <= iNo ; iCnt++)
       {
              printf("%d\t", iCnt);
       }
}
int main ()
{
        int iValue = 0 ;
       printf("Enter the NUmber  :  " );
       scanf( "%d", & iValue );
       Display(iValue);

       return 0 ;
}