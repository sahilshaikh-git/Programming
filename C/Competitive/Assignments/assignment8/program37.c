// write the program which accept number from user and take two input and show area of rectangle

#include<stdio.h>    
double AreaOfReactangle(float fNo1 ,float fNo2)
{
       double Area = 0.0;

       Area = fNo1 * fNo2;

       return Area ;
}

int main()
{
       float fheight =0.0 ;
       float fwidth =0.0 ;
       double dRet = 0.0;
       
       printf("Enter the height : ");
       scanf("%f",&fheight);

       printf("Enter the width : ");
       scanf("%f",&fwidth);

       dRet =AreaOfReactangle(fheight,fwidth);
       
       printf("AreaofCircle : %lf",dRet);
       return 0 ;
}