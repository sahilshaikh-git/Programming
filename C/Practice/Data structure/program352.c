#include<stdio.h>

#pragma pack(1)
struct node 
{
       int data ; 
       struct node *next ;
};

int main ()
{
       struct node obj ;

       printf("size of structure : %lu\n", sizeof(obj) );
       printf("size of Data  : %lu\n", sizeof(obj.data) );
       printf("size of next : %lu\n", sizeof(obj.next) );
       


       return 0 ; 
}