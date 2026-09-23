//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 32
//       4) Write the program which accept the string from the user and accept one character
//       return last occurence of the character
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


typedef int BOOL ;
#define TRUE 1 
#define FALSE 0 

int LastChar(char str [] , char ch)
{
       int i = 0 ; 
       int iCnt =-1;

       for( i= 0 ; str[i] !='\0' ; i++)
       {
              if( str[i] == ch)
              {
                     iCnt =  i;

              }
              

       }
       return iCnt +1;

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

       iRet = LastChar(Arr, ch);

      printf("last occurence  of characher %c is %d  "  , ch , iRet);

       return 0 ;
}