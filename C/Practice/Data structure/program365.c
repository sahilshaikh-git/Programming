#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
typedef struct node NODE  ;
typedef struct node * PNODE ;
struct node 
{
       int data ; 
       struct node *next ;
};

 
int Count ( PNODE first)
{
       int iCount=0;

       while(first !=NULL)
       {
              iCount++ ; 
              first = first->next ;
       }

       return iCount ;

}

int main ()
{



       PNODE head = NULL ;
       

       int iRet = 0 ;

       NODE obj1, obj2  , obj3 ;

       head = &obj1;



       obj1.data = 11 ;
       obj1.next = &obj2 ;

       obj2.data = 21;
       obj2.next = &obj3;

       obj3.data = 51 ;
       obj3.next = NULL ;

       iRet= Count(head);

       printf("Number of elements in linkedlist : %d\n", iRet);


       return 0 ; 
}


