#include<stdio.h>

void Display (int iNo)
{
          

      // Filterr
      if ( iNo <0)
      {
            printf("Invalid Input....");
            return;
      }
      int iCnt =0 ;
       for (iCnt =iNo; iCnt>=0; iCnt--)
      {
      printf(" %d  \n", iCnt);                                               
      }


}


 
int main()
{   


      // iteration
  
      int iValue =0;
      printf("Enter the Frequency :");
      scanf("%d",&iValue);
      Display(iValue);
     
      return 0;
}