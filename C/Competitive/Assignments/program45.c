// write the program which accept area in sqaure feet and convert it into square meter

#include<stdio.h>    
double SquareMeter(float fNo1 )
{
       double Area = 0.0;

       Area = fNo1 * 0.0929;

       return Area ;
}

int main()
{
       float fArea =0.0 ;
       double dRet = 0.0 ;
    
       
       printf("Enter the Area in Sqaure Feet : ");
       scanf("%f",&fArea);

       dRet =SquareMeter(fArea);
       
       printf("SquareMeter : %lf",dRet);
       return 0 ;
}