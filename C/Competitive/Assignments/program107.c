//////////////////////////////////////////
//
//     Assignment 22 1. Accept number from user and display below pattern.
//     
//     5    #      4    #      3    #      2    #      1    #
//     
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
        char ch  = 'A' ; 
        int i  = 0 ;

        for( i =iNo; i>= 1 ;  i-- )
        {
             
            printf("%d\t#\t" ,i);

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