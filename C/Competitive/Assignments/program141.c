// write the program to find out the character is Capital or not 


#include<stdio.h>


#define TRUE 1 
#define FALSE 0 

typedef int BOOL ;

BOOL ChkCapital (char ch )
{

       if ( ch  >=65 && ch <= 90  )
       {
              return TRUE ;
       }
       else if ( ch >= 97 && ch<= 122 )
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
              printf("It is Capital ");
       }
       else
       {
              printf("It  is not Capital");
       }

        return 0 ;
}