
// write the program to find out the character is alphabet or not

#include<stdio.h>


#define TRUE 1 
#define FALSE 0 

typedef int BOOL ;

BOOL ChkAlpha (char ch )
{

       if ( (ch  >=65 && ch <= 90) ||( ch >= 97 && ch<= 122) )
       {
              return TRUE ;
       }
       else
       {
              return FALSE ;
       }

}
int main()
{
       char  cValue  =     '\0' ;
       BOOL bRet = FALSE  ; 
       
       printf("Enter the Character ") ;
       scanf("%c" , &cValue);

       bRet =  ChkAlpha(cValue);

       if (bRet  ==  TRUE )
       {
              printf("It is Character ");
       }
       else
       {
              printf("It  is not Character ");
       }

        return 0 ;
}