#include<stdio.h>

struct node 
{
       int data ; 
       struct node *next ;
};

int main ()
{
       int x= 10 ;
       float y =20.5 ;
       char ch = 'A';


       printf("%zu\n", sizeof(x));
       printf("%zu\n", sizeof(&x));
       printf("%zu\n", sizeof(&y));
       printf("%zu\n", sizeof(&ch));

       return 0 ; 
}