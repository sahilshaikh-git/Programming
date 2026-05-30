#include <stdio.h>

int main()
{

   int Arr[5] = {0};
   int iCnt = 0;

   printf("Enter the Element : \n");

   for (iCnt=0; iCnt < 5; iCnt++)
   {
      scanf("%d", &Arr[iCnt]);
   }

   printf("Element of the array : \n");

   for (iCnt=0; iCnt < 5; iCnt++)
   {
      printf("%d\n", Arr[iCnt]);
   }

   return 0;
}