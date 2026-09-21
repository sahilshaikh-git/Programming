//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 32
//      Write the program which accept the string from the user and accept one character
//       check whether it present or not 
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 

BOOL CheckChar(char str [] , char ch)
{
       int i = 0 ; 
       for ( i = 0 ; str[i] != '\0' ; i++ )
       {
              if(str[i]==ch)
              {
                     return TRUE ;
              }
       }
       return FALSE ;
       
}
int main()
{
       char Arr[20] ;
       char ch = '\0';
       BOOL iRet = FALSE ;

       printf("Enter the string : \n");
       scanf("%[^\n]s" ,  Arr);

       printf("Enter the Character : \n");
       scanf(" %c"  , &ch);

       iRet = CheckChar(Arr, ch);

       if( iRet == TRUE)
       {
              printf("Character is present\n ");
       }
       else
       {
              printf("Character is not present\n ");
       }

       return 0 ;
}