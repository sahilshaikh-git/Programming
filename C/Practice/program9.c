#include<stdio.h>

float  AddTwoNumbers(
                                                 float fNO1 ,                                             // first input
                                                 float fNO2                                             // secont input
                                          )
{
       float fAns = 0.0f;                                                                           //  Variable to store the Result 
       fAns = fNO1 + fNO2;                                                                     // Preform addition
       return fAns;

}
int main()
{                    
       float fValue1 = 0.0f;                                                                      //   to store the first input
       float fValue2 = 0.0f;                                                                    //    to store the second input
       float fResult  = 0.0f;                                                                    //     to store the result      

       printf("Enter the First Number : \n");
       scanf("%f",&fValue1);                                                       

       printf("Enter the Second Number : \n");
       scanf("%f",&fValue2);

       fResult = AddTwoNumbers(fValue1 ,fValue2)  ;                   // 

       printf("Addition of two number : %f \n" ,fResult );

       return 0 ;
}

