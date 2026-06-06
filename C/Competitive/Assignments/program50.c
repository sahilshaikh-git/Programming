// assignment 9 .5   Write the program which accept number from user and return difference between summation of even digit and summation of odd digit

#include<stdio.h>

int Difference( int iNo)
{
       int iEvenCount =0;
       int iOddCount =0;
      int  iEvenSum = 0;
      int  iOddSum = 0;
       int  itemp = 0 ;
     

       if(iNo<0)
       {
              iNo = -iNo ;
       }

       while(iNo !=0)
       {
             itemp = iNo % 10 ;
             if( itemp %2==0)
             {
                     iEvenSum = iEvenSum +       itemp;       
             }      
              if( itemp %2!=0)
             {
                     iOddSum = iOddSum + itemp ;         
             }      
                                                // remainder store hogaa usme
             iNo = iNo/10;
       }

       return iEvenSum-iOddSum;
}
int main()
{
       int iValue = 0;
       int iRet =0;

       printf("Enter the number : ");
       scanf("%d",&iValue);

       iRet =  Difference(iValue);

       printf(   "%d", iRet);
       return 0 ;
}