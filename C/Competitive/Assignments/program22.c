//////////////////////////////////////////////////////////////
//
//     write the program to accept the number and display  
//     $      *      $      *      $      *      $      *      $      *
//
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern( int iNo)
{      
       int iCnt = 0 ; 
       if(-iNo)
       {
                     iNo = -iNo;   
       }

       for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
       {
              printf(" $ * ");
       }

}
int main()
{
       int iValue = 0 ;
       printf("Enter the NUmber  :  " );
       scanf( "%d", & iValue );
       Pattern(iValue);
       return 0 ;
}