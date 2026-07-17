//////////////////////////////////////////
//
//     Assignment 25 1   2. Accept number of rows and number of columns from user and display below pattern.
//          Input:      
//          iRow = 4
//          iCol = 4
//     
//          Output:
//                  
//            a   b   c   d   e 
//             1    2   3   4   5           
//            a   b   c   d   e 
//             1    2   3   4   5           
//            a   b   c   d   e 
//             
//            
//             
//             
//                    
////////////////////////////////////////////////

#include<stdio.h>

void Pattern (int iNo1 , int iNo2)
{
       
        int i  = 0 ;
        int j =0; 
        

    

        for( i =1; i<= iNo1;  i++ )
        {
           
          if(i%2 ==0)
          {
                for( j=1 ; j<= iNo2 ; j++)
                {
                    printf("%d\t", j);
                }
                printf("\n");
          }
          else
          {
            char ch= 'a';
             for( j=1 ; j<= iNo2 ; j++)
                {
                  
                    printf("%c\t", ch);
                    ch++ ;
                }
                 printf("\n");

          }
       
                    
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