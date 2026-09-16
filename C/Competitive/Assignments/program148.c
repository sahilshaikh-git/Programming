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

void Display( char ch )
{
     printf("Decimal :%d\tHexadecimal : %X\tOctal: %o", ch ,ch ,ch  );
}

int main()
{
    char cValue = '\0';
    BOOL bRet =  FALSE ;

    printf("Enter the Charater : ");
    scanf("%c" , & cValue );

     Display(cValue);
    

    return 0;
}      