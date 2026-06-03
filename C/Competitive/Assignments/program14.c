//////////////////////////////////////////////
//
//            Accept the character from the user if check it is vowel or not 
//````        input : E     output true
//            input k       output : false
//
////////////////////////////////////////////////////
#include<stdio.h>
#include<ctype.h>

typedef int BOOL   ;

#define TRUE 1 
#define FALSE 0 


BOOL ChkVowel ( char cValue )
{
       cValue = tolower(cValue);
       if( cValue =='a' || cValue=='e' || cValue =='i' || cValue=='o' || cValue =='u'  ){
              return  TRUE ; 
       }
       else
       {
              return FALSE ;
       }
}

int main()
{
       char cValue = '\0';
       BOOL bRet = FALSE;

       printf("Enter the Character: ");
       scanf("%c", &cValue);

       bRet = ChkVowel(cValue);

       if(bRet == 1)
       {
              printf("this is an Vowel");
       }
       else 
       {
              printf("this is not vowel");
       }
}
