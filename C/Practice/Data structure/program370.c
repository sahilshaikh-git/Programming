#include<stdio.h>
#include<stdlib.h>


struct node 
{
       int data ; 
       struct node *next ; 

};

typedef struct node NODE ;
typedef struct node * PNODE ;
typedef struct node ** PPNODE  ; 


void Display ( PNODE first )
{
       PNODE temp = NULL ;

       while( first != NULL)
       {
              printf(" | %d  | ->  " ,*first );
              first = first -> next  ;
       }
       printf(" | NULL | \n");




}
int Count ( PNODE first )
{
       return 0 ; 

}
void insertFirst ( PPNODE first ,int iNo )
{

       PNODE newn = NULL ; 

       newn = ( PNODE) malloc ( sizeof(NODE));

       newn->data = iNo ; 
       newn->next = NULL ;

       if( *first == NULL )                             // LL is empty
       {
              *first = newn ; 
       }
       else                                                           // LL contain more than 1 node
       {
              newn->next =  *first  ;
              *first = newn ;

       }

}
void insertLast ( PPNODE first,  int iNo)
{
       
       PNODE newn = NULL ; 

       newn = ( PNODE) malloc ( sizeof(NODE));

       newn->data = iNo ; 
       newn->next = NULL ;

       if( *first == NULL )                             // LL is empty
       {
              *first = newn ; 
       }
       else                                                           // LL contain more than 1 node
       {

       }

}
void insertAtPos ( PPNODE first ,  int iNo, int iPos)
{
       
}

void deleteFirst  ( PPNODE first)
{
       
}

void deleteLast  ( PPNODE first)
{
       
}

void deleteAtPos  ( PPNODE first , int iPos)
{
       
}
int main()
{
       PNODE head  = NULL ;

       insertFirst(&head ,101);
       insertFirst(&head ,51);
       insertFirst(&head ,21);
       insertFirst(&head ,11);

       Display(head);


       
       return 0 ; 

}