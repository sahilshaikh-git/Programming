///////////////////////////////////////////////////////////////////////////
//
//            Accept two number from the user and check whether is even or odd
//
//
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkEven( int iNo)
{
       if (iNo%2 == 0)
       {
              return TRUE;
       }
       else
       {
              return FALSE;  
       }
}

int main( )
{
       int iValue = 0;
       BOOL bRet = FALSE;

       printf("Enter the NUmber :");
       scanf("%d",&iValue);

       bRet  = chkEven(iValue);

       if (bRet == TRUE)
       {
              printf("EVEN");
       }
       else{
              printf("ODD");
       }
       return 0 ;
       
}