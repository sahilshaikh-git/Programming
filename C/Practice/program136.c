// write the program in which find out the number is present or not

#include <stdio.h>
#include <stdlib.h>


// Time Complexity  O(n)
int Minimum(int Arr[], int iLength)
{
       int iCnt =0;
       int iMin = 0 ;

       iMin = Arr[0];

       for (iCnt = 0; iCnt < iLength; iCnt++)
       {
              if (Arr[iCnt] < iMin)
              {      
              
                     iMin= Arr[iCnt];
                      
              }
       }

       return iMin ;
    
     
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


      iRet=   Minimum(Brr, iLength);

      printf("Minimum Element is %d" , iRet);
       
       free(Brr);

       return 0;
}