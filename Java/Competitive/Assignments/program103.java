//////////////////////////////////////////////////////////////
//
//     Assignment 21 - 4. Write a program to display all factors of a given number.
//         
//
//////////////////////////////////////////////////////////////

 
import java.util.*;

class Logic
{
       void  countEvenOddRange ( int num)
       {
            int iCount = 0 ;
              
            System.out.println("Factors of " + num +  " is : " );
            for( int i = 1 ; i <= num ; i++)
            {
                     if(num %i ==0)
                     {
                            iCount++ ;
                     }
            }
            System.out.println("Total number of Factor is "+ iCount);
            
       }

}

 class program104
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.countEvenOddRange(15);
       
       }
}

