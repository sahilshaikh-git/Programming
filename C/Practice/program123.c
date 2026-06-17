#include<stdio.h>
#include<stdlib.h>


int Summation(int Arr[], int iSize)
{
       int iSum = 0 ;
       int iCnt = 0;
       
       for ( iCnt =0; iCnt<iSize  ; iCnt++){

              iSum = iSum +  Arr[iCnt];
       }

       return iSum ;

}
int main()
{
       int *Brr = NULL;
       int iLength = 0 ;
       int iCnt = 0 ;
       int iRet = 0;

       printf("Enter the number of elements  : ");
       scanf("%d",&iLength);

       Brr = (int*)malloc(sizeof(int)* iLength);

       printf("Enter the Elements :");


       for (iCnt =0; iCnt<iLength ; iCnt++)
       {
              scanf("%d", &Brr[iCnt]);
       }

       iRet =  Summation( Brr , iLength);

       printf("Summation of element %d\n  QASD" ,iRet);

       free(Brr);
       return 0 ;
}