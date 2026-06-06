// assignment 9 .2 Write the program which accept number from user and return count of odd digit

#include<stdio.h>

int CountOdd( int iNo)
{
       int iCnt = 0 ;
       int iCount =0;
       int  itemp = 0 ;

       if(iNo<0)
       {
              iNo = -iNo ;
       }

       while(iNo !=0)
       {
             itemp = iNo % 10 ;                                                                          // remainder store hogaa usme 
              if(itemp%2!=0)
              {      
                     iCount ++ ;

              }
              iNo = iNo/10;                                                                // number will be reduce
       }

       return iCount;
}
int main()
{
       int iValue = 0;
       int iRet =0;

       printf("Enter the number ");
       scanf("%d",&iValue);

       iRet =  CountOdd(iValue);

       printf(   "%d", iRet);
       return 0 ;
}