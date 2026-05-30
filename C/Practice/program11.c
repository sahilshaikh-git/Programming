/*
              START
                            accept number as No
                            If No is completely divisible by 2
                                   then print Even
                            otherwise
                                   then print odd        
              STOP       
              
              START
                            accept number as No
                            Divide No by 2
                            if remainder is 0 
                                   then print as Even
                            otherwise
                                   print odd       
              STOP
*/


#include<stdio.h>

int main()
{

       int iValue =0;
       int iRemainder = 0;
       

       printf("Enter the Number: ");
       scanf("%d",&iValue);

       iRemainder = iValue %2 ;
       
       if(iRemainder==0)
       {
              printf("Number is even\n");   
       }
       else
       {
              printf("Number is odd");
       }

       return 0;
}