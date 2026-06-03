// ////////////////////////////////////////////////////////////////////////////////
//
//         Accept one number from the user and if number is less than 10 print hello ,otherwise print    demo
//
////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>    

void display( int iNo)
{

       if(iNo< 10)
       {
              printf("Hello");
       }
       else
       {
              printf("Demo");
       }
}

int main ()
{
       int iValue =0 ;
        
       printf("Enter the Number : ");
       scanf("%d", &iValue);

       display(iValue);

       return 0;
}