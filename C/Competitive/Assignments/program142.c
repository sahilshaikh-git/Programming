// write the program to find out the character check whether it is digt or not


#include<stdio.h>


#define TRUE 1 
#define FALSE 0 

typedef int BOOL ;

BOOL ChkCapital (char ch )
{

       if ( ch  >=48&& ch <= 57  )
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

       bRet =  ChkCapital(cValue);

       if (bRet  ==  TRUE )
       {
              printf("It is Number  ");
       }
       else
       {
              printf("It  is not Number l");
       }

        return 0 ;
}