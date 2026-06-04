/// Write the program of even factorial of numberr

#include<stdio.h>

int EvenFact (int iNo)
{
       int iCnt = 0 ;
    int    iEvenFact= 1 ;
       
       for(iCnt=2 ; iCnt<=iNo ; iCnt= iCnt +2)
       {      
              iEvenFact = iEvenFact * iCnt ;
       }      
       return iEvenFact ;

}
int main()
{

        int iValue  =0 ;
        int iRet = 0 ;
       printf("Enter the Number : ");
       scanf("%d", &iValue);              
        iRet =EvenFact(iValue);
        printf("%d",iRet);
       return 0 ;
}