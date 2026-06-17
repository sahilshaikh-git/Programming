// write the program in which find out the number is present or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Time Complexity  O(n)
bool LinearSearch(int Arr[], int iLength, int iNo)
{
       int iCnt = 0;
       


       for (iCnt = 0; iCnt < iLength; iCnt++)
       {
              if (Arr[iCnt] == iNo)
              {      
              
                     break;
                      
              }
       }

       if( iCnt == iLength)
       {
              return false ;
       }
       else{
              return true ;
       }

    
     
}

int main()
{
       int iLength = 0, iCent = 0, iValue = 0 ;
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

       printf("Enter the Element you want to search \n");
       scanf("%d", &iValue);

       bRet = LinearSearch(Brr, iLength,iValue);
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