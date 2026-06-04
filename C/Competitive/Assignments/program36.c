/// Write the program of which return difference of odd and even  factorial of numberr

#include<stdio.h>

int OddFact (int iNo)
{
       if(iNo<0)
       {
              iNo = -iNo ;
       }
       int iCnt = 0 ;
    int    iOddFact= 1 ;
    int    iEvenFact= 1 ;
       
       for(iCnt=1 ; iCnt<=iNo ; iCnt= iCnt +2)
       {      
              iOddFact= iOddFact * iCnt ;
       }      

        
       for(iCnt=2; iCnt<=iNo ; iCnt= iCnt +2)
       {      
              iEvenFact= iEvenFact * iCnt ;
       }      


       return iEvenFact - iOddFact;

}
int main()
{

        int iValue  =0 ;
        int iRet = 0 ;
       printf("Enter the Number : ");
       scanf("%d", &iValue);              
        iRet =OddFact(iValue);
        printf("Difference betwwn odd factorial and even factorial: %d",iRet);
       return 0 ;
}