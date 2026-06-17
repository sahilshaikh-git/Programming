// write the program in which find out the number is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool LinearSearch(int Arr[], int iLength)
{
       int iCnt = 0;

       for (iCnt = 0; iCnt < iLength; iCnt++)
       {
              if (Arr[iCnt] == 11)
              {
                     return true ;                                    /// Bad Prograamming practice
                     
              }
       }
       return false ;
     
}

int main()
{
       int iLength = 0, iCent = 0;
       int *Brr = NULL;
       bool bRet = false;
       printf("Enter the number of element :\n");
       scanf("%d", &iLength);

       Brr = (int *)malloc(sizeof(int) * iLength);

       printf("Enter the elements : \n");

       for (iCent = 0; iCent < iLength; iCent++)
       {
              scanf("%d", &Brr[iCent]);
       }
       bRet = LinearSearch(Brr, iLength);
       if(bRet == true)
       {
              printf(" Element is present");
       }
       else
       {
              printf("Element is not present");
       }


       free(Brr);

       return 0;
}