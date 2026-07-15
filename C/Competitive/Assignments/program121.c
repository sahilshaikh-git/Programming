//////////////////////////////////////////
//
//     Assignment 25 1   2. Accept number of rows and number of columns from user and display below pattern.
//          Input:      
//          iRow = 4
//          iCol = 4
//     
//          Output:
//                  
//             1    2   3   4
//             5  6  7    8
//             9  1   2    3 
//             4  5  6    7
//                    
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo1 , int iNo2)
{
       
        int i  = 0 ;
        int j =0; 
        int no = 1 ;
    

        for( i =1; i<= iNo1;  i++ )
        {
            
           
            for( j =1 ; j<= iNo2; j++)
            {
                
              printf("%d\t" , no);
              no++ ;
               
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