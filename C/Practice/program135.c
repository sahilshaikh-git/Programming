// write the program in which find out the number is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Time Complexity  O(n)
int Maximum(int Arr[], int iLength)
{
       int iCnt =0;
       int iMax = 0 ;

       iMax = Arr[0];

       for (iCnt = 0; iCnt < iLength; iCnt++)
       {
              if (Arr[iCnt] > iMax)
              {      
              
                     iMax = Arr[iCnt];
                      
              }
       }

       return iMax ;
    
     
}

int main()
{
       int iLength = 0, iCent = 0  ,iRet = 0;
       int *Brr = NULL;
       
       printf("Enter the number of element :\n");
       scanf("%d", &iLength);

       Brr = (int *)malloc(sizeof(int) * iLength);

       printf("Enter the elements : \n");

       for (iCent = 0; iCent < iLength; iCent++)
       {
              scanf("%d", &Brr[iCent]);
       }


      iRet=   Maximum(Brr, iLength);

      printf("Maximum Element is %d" , iRet);
       
       free(Brr);

       return 0;
}