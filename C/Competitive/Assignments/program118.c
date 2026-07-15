//////////////////////////////////////////
//
//     Assignment 24 1   2. Accept number of rows and number of columns from user and display below pattern.
//          Input:      
//          iRow = 4
//          iCol = 4
//     
//          Output:
//                  
//             A    B   C   D
//             A    B   C   D
//             A    B   C   D
//             A    B   C   D
//                    
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo1 , int iNo2)
{
       
        int i  = 0 ;
        int j =0; 
        char ch = 'A';
        char chm = 'a' ;

        for( i =1 ; i<= iNo1 ;  i++ )
        {
            
           
            for( j =1  ; j<= iNo2; j++)
            {
                printf("    %c  " , ch);
              
               
            }
              ch++ ;
            
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