//  Ass 30 5> write the program which accept the strng give and convert nto the lower case

#include<Stdio.h>


void strlower(char str[] )
{      
       int i = 0 ;
       for( i =  0 ; str[i] != '\0' ; i++)
       {
              if( str[i] >= 'A' && str[i] <= 'Z')
              {
                     str[i] =str[i] + 32 ;
              }
       }
}

int main( )
{
       char arr[20];
       printf("Enter the string : ") ;
       scanf("%[^'\n']s"  , arr);

       strlower(arr) ; 

       printf("Modified String is : %s\n" , arr);

       return 0 ;
}