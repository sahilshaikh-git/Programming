//  11 .  1) write the program which accept range from  user and  return addition of all number between the range
//            ( Range should be only posituve number )
//   23       35
//

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{

       int iSum = 0;
       int iCnt = 0;
       if (iStart > iEnd || iStart < 0 || iEnd < 0)
       {
              return -1;
       }
       for (iCnt = iStart; iCnt <= iEnd; iCnt++)
       {
              iSum = iSum + iCnt;
       }
       return iSum;
}

int main()
{
       int iValue1 = 0, iValue2 = 0, iRet = 0;

       printf("Enter Starting Point : ");
       scanf("%d", &iValue1);

       printf("Enter End Point : ");
       scanf("%d", &iValue2);

        iRet = RangeSum(iValue1, iValue2);

       if (iRet==-1)
       {
              printf("invalid input");
       }
       else
       {
              printf("Summation of all Range Elements :  %d", iRet);
       }

       return 0;
}