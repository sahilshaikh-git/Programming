//  11 .  1) write the program which accept range from  user and display summation all even number  number between the range

//   23       35
//     

#include<stdio.h>

int RangeDisplay( int iStart , int iEnd)
{             
       int iCnt =0 ;
       int iEvenSum =0 ;
              if( iStart> iEnd || iStart< 0 || iEnd <0 ){
                     return -1 ;
              }
              
              for( iCnt = iStart ; iCnt <= iEnd  ; iCnt++)
              {
                     if(iCnt%2== 0)
                     {
                            iEvenSum = iEvenSum + iCnt ;
                     }
              }
              return iEvenSum ;

       }


       int main()
       {
              int iValue1 = 0 , iValue2 =0 , iRet =0 ;

              printf("Enter Starting Point : ");
              scanf("%d" ,&iValue1);

       printf("Enter End Point : ");
       scanf("%d", &iValue2);

       
        iRet = RangeDisplay(iValue1 , iValue2);

        if(iRet ==   -1 )
        {
              printf("Invalid input");
        }
        else
        {
              printf("Summation of all even number :%d ",iRet);
        }



       return 0 ;
}