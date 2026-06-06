// assignment 9 .4Write the program which accept number from user and return count multiplication of all digit

#include<stdio.h>

int MultDigit( int iNo)
{
       int iCnt = 0 ;
       int iCount =0;
       int  itemp = 0 ;
       int iMul = 1 ;

       if(iNo<0)
       {
              iNo = -iNo ;
       }

       while(iNo !=0)
       {
             itemp = iNo % 10 ;
             if( itemp !=0)
             {
             iMul = iMul * itemp  ;              
             }                                         // remainder store hogaa usme 
         

              iNo = iNo/10;
       }

       return iMul;
}
int main()
{
       int iValue = 0;
       int iRet =0;

       printf("Enter the number : ");
       scanf("%d",&iValue);

       iRet =  MultDigit(iValue);

       printf(   "%d", iRet);
       return 0 ;
}