// Write the program to accept number from user 
// 5 
// *          *             *      *      *      #      #      #        #          #
#include<stdio.h>


int Display (int iNo)
{
       int iCnt = 0;

       for (iCnt =1 ; iCnt <=iNo ; iCnt++)
       {
              printf("  * ");
       }
       for (iCnt =1 ; iCnt <=iNo ; iCnt++)
       {
              printf("  # ");
       }

}
int main()
{
       int iValue  =0 ;
       printf("Enter the Number : ");
       scanf("%d", &iValue);              
       Display(iValue);

       return 0 ;


}