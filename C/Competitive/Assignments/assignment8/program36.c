// write the program which accept number from user and which radius amd it find out area of circle 

#include<stdio.h>    
double AreaOfCircle(float iValue)
{
       double PI =3.14;
       double Area = 0.0;

       Area = PI*iValue*iValue;

       return Area ;
}

int main()
{
       float fValue =0.0 ;
       double dRet = 0.0;
       printf("Enter the radius : ");
       scanf("%f",&fValue);

       dRet =AreaOfCircle(fValue);
       
       printf("AreaofCircle : %lf",dRet);
       return 0 ;
}