//  assignent 26 2.   Accept number of rows and number of columns from user and display below pattern.
//
//            1      2      3      4
//            1       *     *     4
//            1      *      *      4
//            1      2      3      4

#include<stdio.h>


void Pattern ( int iRow  , int iCol)
{

       int i = 0 ;
       int j = 0 ;

       for( i =1  ; i <=iRow ; i++ )
       {
              
                   for( j=1 ; j<=iCol; j++ )
               {
                     if(i ==iRow || j==iCol || i==1 || j==1)
                     {
                            printf(" %d " , j);
                     }
                     else{
                               printf( " @ ");
                     }
                    
               }

               printf("\n");
       }
}
int main()
{
       int iValue1 =0 , iValue2 = 0;

       printf("Enter the Row and Column\n");

       scanf(" %d %d"  , &iValue1 ,&iValue2);

       Pattern(iValue1 , iValue2);
       
        
       return 0 ;
}


