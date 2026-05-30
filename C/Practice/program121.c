#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[],int iSize)
{        
   int iCnt = 0 ;
      printf("Elements of the Array are  : \n");

      for ( iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
      printf("%d\n", Arr[iCnt]);

   }



}
int main()
{
   int *Brr = NULL;
   int iLength = 0 , iCnt = 0;

   // Step 1 : Accept number of Elements 
   printf("Enter number of elment : \n");
   scanf("%d",&iLength);

   
   // Step 2 : Allocate the memory
   Brr = ( int *) malloc ( iLength * sizeof(int));


   // Step 3: Accept value for the user 
   printf("Enter the elements :\n");
   for ( iCnt = 0 ; iCnt < iLength ; iCnt++)
   {
      scanf("%d", &Brr[iCnt]);

   }

   // Step 4 : Use the Memory 
   Display(Brr ,iLength);



   // Step 5 : Deallocate the Memory

   free(Brr);

   return 0 ;
}