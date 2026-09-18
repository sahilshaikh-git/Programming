//  Ass 30 5> write the program which accept the strng give itreverse order 

#include<Stdio.h>
#include<string.h>

void Reverse(char str[] )
{
       int i = 0 , iLength =  0 ; 

       for (  i = 0 ; str[i] !=  '\0' ; i++)
       {
              iLength++ ;
       }

       for( i = iLength -1 ; i >= 0 ;  i-- )
       {
              printf( "%c" ,  str[i]);
       }
       printf("\n");

}

int main( )
{
       char arr[20];
       printf("Enter the string : ") ;
       scanf("%[^'\n]s"  , arr);
       Reverse(arr) ; 

       return 0 ;
}