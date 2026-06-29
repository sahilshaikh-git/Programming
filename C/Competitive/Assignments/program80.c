// 15.5   Accept n number from the user and display summation of all digits of each elements

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

void  Digit(int Arr[], int iLength )
{
       int iCnt = 0;
       int iNo = 0;
       int iTemp =0 ;
      

       for ( iCnt = 0 ; iCnt< iLength  ; iCnt ++)
       {
               int iDigit = 0  ;
               iNo = Arr[iCnt];

              while(iNo!=0)
              {
       
             iTemp = iNo %10      ;
             iDigit = iDigit + iTemp; 
             iNo = iNo/10 ;
              }
              printf("%d\t", iDigit);
       } 
      


 }


int main()
{
       int iSize= 0 ,iRet = 0 , iCnt =0 , iValue =0 ;

        int*p = NULL ;

        printf("Enter the Elements :  \n");
        scanf("%d", &iSize);

        

        p = (int *)malloc(iSize * sizeof(int));

        if(p==NULL){
              printf("unable to allocate the memory ");
              return -1 ;

        }
        printf("Enter %d element\n", iSize);

        for(iCnt = 0 ; iCnt <iSize ; iCnt++)
        {
              printf("Enter the Elements %d\n",iCnt +1);
              scanf("%d",&p[iCnt]);
        }

       printf("Summation of all Digits : ");
        Digit(p,iSize);


        free(p);

       return 0 ;
}          