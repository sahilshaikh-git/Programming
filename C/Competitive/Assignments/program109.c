//////////////////////////////////////////
//
//     Assignment 22 3  Accept number from user and display below pattern.
//     
//        #     1       *       #       2       *       #       3       *       #       4       *
//     
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo)
{
        char ch  = 'A' ; 
        int i  = 0 ;

        for( i =1; i<= iNo ;  i++ )
        {
            printf("#\t%d\t*\t" ,i);
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