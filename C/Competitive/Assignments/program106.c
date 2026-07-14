//////////////////////////////////////////
//
//     Assignment 22 1. Accept number from user and display below pattern.
//     
//     A      B      C      D      E
//     
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
        char ch  = 'A' ; 
        int i  = 0 ;

        for( i =1 ; i<= iNo ;  i++ )
        {
              printf("%c\t" ,ch);
              ch++ ;
        }

}
int main()
{
       int iValue = 0 ;

       printf("Enter the Number : ");
       scanf("%d" , &iValue) ;

       Pattern(iValue);
       return 0 ; 

}