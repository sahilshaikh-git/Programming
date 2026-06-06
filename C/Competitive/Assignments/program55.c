//  11 .  1) write the program which accept range from  user and display all  number between the range

//   23       35
//     

#include<stdio.h>

void RangeDisplay( int iStart , int iEnd)
{             
              if( iStart> iEnd  ){
                     printf("Invalid Range");
              }
              int iCnt =0 ;
              for( iCnt = iEnd ; iCnt >= iStart  ; iCnt--)
              {
                     printf( "%d\t",iCnt);
              }

       }


       int main()
       {
              int iValue1 = 0 , iValue2 =0;

              printf("Enter Starting Point : ");
              scanf("%d" ,&iValue1);

       printf("Enter End Point : ");
       scanf("%d", &iValue2);

       RangeDisplay(iValue1 , iValue2);


       return 0 ;
}