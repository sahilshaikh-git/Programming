//  Ass 31. 3 Write a program which accept string from user and convert it into toggle case

#include<Stdio.h>


void strToggle(char str[] )
{      
       int i = 0 ;
       for( i =  0 ; str[i] != '\0' ; i++)
       {
              if( str[i] >= 'a' && str[i] <= 'z')
              {
                     str[i] =str[i] - 32 ;
              }
              else if( str[i] >= 'A' && str[i] <= 'Z')
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

       strToggle(arr) ; 

       printf("Modified String is : %s\n" , arr);

       return 0 ;
}