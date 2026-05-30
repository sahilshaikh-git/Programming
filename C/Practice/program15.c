#include<stdio.h>
#include<stdbool.h>

  bool CheckEvenOdd(int iNO)
{
        int iRemainder = 0;
        iRemainder = iNO %2 ;
       
        if (iRemainder ==0)
        {
          return true;
        }
        else
        {
          return false;
        }

}  
int main()
{

       int iValue =0;
       bool bRet = false;

       printf("Enter the Number to check whether it is Even or Odd : ");
       scanf("%d",&iValue);
       
      bRet = CheckEvenOdd(iValue);

      if(bRet == true)
      {
       printf("%d is Even",iValue);
      }
      else
      {
       printf("%d is odd", iValue);
      }

       return 0;
}