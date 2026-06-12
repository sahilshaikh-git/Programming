       // write the program which accept the number from the user and check whether it contains zero or not

#include<stdio.h>

#define TRUE 1 ;
#define FALSE 0 ;

typedef int BOOL ;

BOOL Chkzero( int iNo)
{      
              int iRemainder = 0;
              if(iNo <0)
              {
                     iNo = -iNo;
              }

              while( iNo != 0 )
              {
                     iRemainder = iNo % 10 ;
                     if(iRemainder==0){
                            return 1 ;
                     }
                     iNo = iNo /10;
              }
              return 0;

}
int main()
{
       int iValue  = 0 ; 
       BOOL bRet = FALSE;
       printf("Enter the Number : ");
       scanf("%d",&iValue);

        bRet = Chkzero(iValue);

        if(bRet == 1){
              printf(" zero is present");

        }
        else
        {
              printf("Zero is not present");
        }
       return 0 ;
}