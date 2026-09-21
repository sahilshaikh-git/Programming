//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 32
//       2) Write the program which accept the string from the user and accept one character
//       return frequncy of that character
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 

int CheckChar(char str [] , char ch)
{
       int i = 0 ; 
       int iCnt =0;
       for ( i = 0 ; str[i] != '\0' ; i++ )
       {
              if(str[i]==ch)
              {
                     iCnt++ ;
              }
       }
       return iCnt ;
       
}
int main()
{
       char Arr[20] ;
       char ch = '\0';
       int iRet = 0 ;

       printf("Enter the string : \n");
       scanf("%[^\n]s" ,  Arr);

       printf("Enter the Character : \n");
       scanf(" %c"  , &ch);

       iRet = CheckChar(Arr, ch);

      prinf("Frequecy of characher %c is %d  "  , ch , iRet);

       return 0 ;
}