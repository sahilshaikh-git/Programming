// write the program to find out the character check whether it is character in the small case


#include<stdio.h>


#define TRUE 1 
#define FALSE 0 

typedef int BOOL ;

BOOL ChkCapital (char ch )
{

       if ( ch  >=97 && ch <= 122  )
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
              printf("It is smal case  ");
       }
       else
       {
              printf("It  is not small case");
       }

        return 0 ;
}