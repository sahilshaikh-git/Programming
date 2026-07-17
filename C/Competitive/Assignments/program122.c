//////////////////////////////////////////
//
//     Assignment 25 1   2. Accept number of rows and number of columns from user and display below pattern.
//          Input:      
//          iRow = 4
//          iCol = 4
//     
//          Output:
//                  
//             2  4 6 8 10
//             1   3 5 7  9
//             2  4 6 8 10
//             1   3 5 7  9
//             
//             
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
            if(i%2!=0)
            {
                  for( j =1 ; j<= iNo2; j++)
                    {
                            printf("%d\t", j*2);
                    }
                    printf("\n");
            }   
            else
            {
                   for( j =1 ; j<= iNo2; j++)
                    {

                             
                            printf("%d\t", (j*2)-1);
                         
                          
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