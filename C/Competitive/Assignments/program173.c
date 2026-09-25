#include<stdio.h>

int main()
{
       int A  =0 ;
       int B = 0 ;
       int Ans = 0 ;

       printf("Enter the first Number :");
       scanf("%d" , &A);

       printf("Enter the second Number :");
       scanf("%d" , &B);

       Ans =  A & B ;

       printf("Answer is %d " ,  Ans);
}