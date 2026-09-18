//  Ass 31. 5 Write a program which accept string from user and count number of white spaces

#include<Stdio.h>


int  WhiteChk(char str[] )
{      
       int iCnt =0; 
       int i = 0 ;
       for( i =  0 ; str[i] != '\0' ; i++)
       {
              if( str[i]  ==  ' ' )
              {
                     iCnt++ ; 
              }
         
       }
       return iCnt ; 
}

int main( )
{
       char arr[20];
       int iRet = 0;
        printf("Enter the string : ") ;
       scanf("%[^'\n']s"  , arr);

       iRet =  WhiteChk(arr) ; 
       printf("Number of white space in string are :  %d", iRet ) ; 
       return 0 ;
}