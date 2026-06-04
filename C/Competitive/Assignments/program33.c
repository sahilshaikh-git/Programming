// Write the program to accept amount inUS dollar and return its corresponding value in indian currency
// consider 1 dollar = 96.16

#include<stdio.h>

double Display (double iNo)
{
       return iNo*96.16;
}
int main()
{
       double dValue  =0.0 ;
       double dRet = 0.0;

       printf("Enter the Number : ");
       scanf("%lf", &dValue);     

       dRet =Display(dValue);

       printf("The Rupees in INR is %.2lf" , dRet);

       return 0 ;


}