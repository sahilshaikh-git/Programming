//  Ass 31. 3  Write a program which accept string from user and display only digits from the that string

#include<Stdio.h>


void strNumChk(char str[] )
{      
       int i = 0 ;
       for( i =  0 ; str[i] != '\0' ; i++)
       {
              if( str[i] >= '0' && str[i] <= '9')
              {
                     printf("%c\n" , str[i]);
              }
         
       }
}

int main( )
{
       char arr[20];
       printf("Enter the string : ") ;
       scanf("%[^'\n']s"  , arr);

       strNumChk(arr) ; 

       

       return 0 ;
}