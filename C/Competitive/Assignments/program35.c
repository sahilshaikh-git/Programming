/// Write the program of odd factorial of numberr

#include<stdio.h>

int OddFact (int iNo)
{
       if(iNo<0)
       {
              iNo = -iNo ;
       }
       int iCnt = 0 ;
    int    iOddFact= 1 ;
       
       for(iCnt=1 ; iCnt<=iNo ; iCnt= iCnt +2)
       {      
              iOddFact= iOddFact * iCnt ;
       }      
       return iOddFact ;

}
int main()
{

        int iValue  =0 ;
        int iRet = 0 ;
       printf("Enter the Number : ");
       scanf("%d", &iValue);              
        iRet =OddFact(iValue);
        printf("Factorial of all odd number: %d",iRet);
       return 0 ;
}