// write the program which accept the number from user and if the number  lese than 50 print small
// if nuber less than 100 then print medium and grater than 100 print greter



#include<stdio.h>

void Number(int iNo)
{
       if(iNo <=50)
       {
              printf("small");
       }
       else if(iNo <100) 
       {
              printf("medium");
       }
       else
       {
              printf("large");
       }
}
int main ()
{
       int iValue =0;
       printf("Enter the Number : ");
       scanf("%d",& iValue);

       Number(iValue);
       return 0 ; 
}