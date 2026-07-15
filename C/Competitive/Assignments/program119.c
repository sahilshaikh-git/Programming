//////////////////////////////////////////
//
//     Assignment 24 4   2. Accept number of rows and number of columns from user and display below pattern.
//          Input:      
//          iRow = 4
//          iCol = 4
//     
//          Output:
//                  
//             4    4   4   4   4
//             3    3   3   3   3
//             2    2   2   2   2
//             1    1     1    1    1
//                    
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo1 , int iNo2)
{
       
        int i  = 0 ;
        int j =0; 
    

        for( i =1; i<= iNo1;  i++ )
        {
            
           
            for( j =1 ; j<= iNo2; j++)
            {
                
              printf("      %d      " , i);
               
            }
           
            
            printf("\n");
            
        }

}
int main()
{
       int iValue1 = 0 , iValue2 = 0 ;

       printf("Enter the Number row and column : ");
       scanf("%d    %d" , &iValue1, &iValue2) ;

       Pattern(iValue1, iValue2);
       return 0 ; 

}