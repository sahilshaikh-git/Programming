#include <stdio.h>

void CallbyValue(int iNo)
{
         iNo++;
}
int main()
{
   int ivalue = 11 ;
   CallbyValue(ivalue);

   printf("Value after the function Call%d\n ",ivalue);



   return 0;
}