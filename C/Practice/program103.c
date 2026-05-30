#include <stdio.h>

void CallbyAddress(int *iPtr)
{
         (*iPtr)++;
}
int main()
{
   int ivalue = 11 ;
   CallbyAddress(&ivalue);

   printf("Value after the function Call :   %d\n ",ivalue);



   return 0;
}