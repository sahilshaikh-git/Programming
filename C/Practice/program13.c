


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

       printf("Enter the Number: ");
       scanf("%d",&iValue);

      iRet = CheckEvenOdd(iValue);

      if(iRet == 0)
      {
       printf("Number is Even");
      }
      else
      {
       printf("Number is odd");
      }

    

       return 0;
}