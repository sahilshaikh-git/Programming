


#include<stdio.h>

void CheckEvenOdd(int iNO)
{
        int iRemainder = 0;
        iRemainder = iNO %2 ;
       
       if(iRemainder==0)
       {
              printf("Number is even\n");   
       }
       else
       {
              printf("Number is odd");
       }

}
int main()
{

       int iValue =0;

       

       printf("Enter the Number: ");
       scanf("%d",&iValue);

       CheckEvenOdd(iValue);

    

       return 0;
}