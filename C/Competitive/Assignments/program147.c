///////////////////////////////////////////////////////////////////
//   
//      Accept  the character from the user check whether it special symbol o not    
//   
//   
//     
///////////////////////////////////////////////////////////////////////////


#include<stdio.h>

#define TRUE 1 
#define FALSE 0
typedef  int BOOL  ;

BOOL  chkSpecial( char ch )
{
     if( ch >= 33 && ch <= 47)
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
    char cValue = '\0';
    BOOL bRet =  FALSE ;

    printf("Enter the Charater : ");
    scanf("%c" , & cValue );

     bRet =  chkSpecial (cValue);
     if (bRet == TRUE )
     {
          printf("This is special symbol");
     }
     else
     {
          printf("This is not special symbol");
     }
     

    return 0;
}      