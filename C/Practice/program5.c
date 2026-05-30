/*
           START            
                            Accept First number as No1;
                            Accept Second Number as No2;
                            Perform addition is No1 and No2 ;
                            Display the Result 
           STOP
*/

#include<stdio.h>

int main()
{                    
       float i ,j ,k;

       printf("Enter the First Number : \n");
       scanf("%f",&i);                                                       

       printf("Enter the Second Number : \n");
       scanf("%f",&j);

       k = i+j;

       printf("Addition of two number : %f \n" ,k );

       return 0 ;
}