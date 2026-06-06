// assignment 9 .3 Write the program which accept number from user and return count of digit between 3 to 7

#include<stdio.h>

int CountNum( int iNo)
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
              if((itemp > 3)&& (itemp<7))
              {      
                     iCount ++ ;

              }
              iNo = iNo/10;
       }

       return iCount;
}
int main()
{
       int iValue = 0;
       int iRet =0;

       printf("Enter the number ");
       scanf("%d",&iValue);

       iRet =  CountNum(iValue);

       printf(   "%d", iRet);
       return 0 ;
}