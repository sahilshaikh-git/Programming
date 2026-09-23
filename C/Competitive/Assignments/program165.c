//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 32
//       4) Write the program which accept the string from the user and reverse the 
//            String
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 

int RevStr(char str [])
{
       char *first ;
       char *end;

       first = str ;
       
       for ( int i =0 ; str[i]!='\0'; i++)
       {
              printf( "%c" ,str[i]);
       }
       
}
int main()
{
       char Arr[20] ;

       printf("Enter the string : \n");
       scanf("%[^\n]s" ,  Arr);

       RevStr(Arr);


       return 0 ;
}