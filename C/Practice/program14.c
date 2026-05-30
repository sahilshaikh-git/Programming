#include<stdio.h>

  int CheckEvenOdd(int iNO)
{
        int iRemainder = 0;
        iRemainder = iNO %2 ;
       
        return iRemainder;

}
int main()
{

       int iValue =0;
       int iRet = 0;

       printf("Enter the Number to check whether it is Even or Odd : ");
       scanf("%d",&iValue);

      iRet = CheckEvenOdd(iValue);

      if(iRet == 0)
      {
       printf("%d is Even",iValue);
      }
      else
      {
       printf("%d is odd", iValue);
      }

       return 0;
}