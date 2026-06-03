///////////////////////////////////////////////////////////////////////////////
//
//                   write the program whichaccept nuber fromt the useer and return 
//                   the even factor of that number
//
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayFactor ( int iNO)
{

       int i =0 ;

       if ( iNO <= 0)
       {
              iNO=-iNO;

       }

       for ( i=1 ;i<iNO;i++)
       {
              if ( iNO %i ==0){
                     printf("%d\t", i);
              }
       }
}
int main()
{
       
       int iValue=0;

       printf("Enter the number ");
       scanf("%d",&iValue);

       DisplayFactor(iValue);
       return 0 ;
}