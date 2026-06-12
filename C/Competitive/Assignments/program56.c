// write the program which accept the number from the user and display it digits in reverse  order
#include<stdio.h>

void  DisplayDigit( int iNo)
{      
              int iRemainder = 0;
              if(iNo <0)
              {
                     iNo = -iNo;
              }

              while( iNo != 0 )
              {
                     iRemainder = iNo % 10 ;
                     printf("%d\n", iRemainder);
                     iNo = iNo /10;
              }

}
int main()
{
       int iValue  = 0 ; 
       printf("Enter the Number : ");
       scanf("%d",&iValue);

       DisplayDigit(iValue);
       return 0 ;
}