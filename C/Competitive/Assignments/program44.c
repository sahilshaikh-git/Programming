/////////////////////////////////////////////////////////////////////////////
//
//            Accept tempreture from the user  in fahrenheit and convert it into celsius
//
//
///////////////////////////////////////////////////////////////////////////////




#include<stdio.h>    
double FhtoCs (float fTemp)
{
       double fCs = 0.0;

       fCs = (fTemp-32)*(5.0/9.0);

       return fCs;
}

int main()
{
       float fTemp= 0.0 ;
       double dRet = 0.0 ;


       printf("Enter the Temprature in Fahrenheit  : ");
       scanf("%f",&fTemp);


       dRet =FhtoCs(fTemp);
       
       printf("Degree in celcuus is  %f  ",dRet);

       return 0 ;
}