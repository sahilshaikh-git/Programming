//////////////////////////////////////////////////////////////
//
//     Assignment 21 - 2 Write a program to count how many even and odd numbers are present between 1 and N.
//         
//
//////////////////////////////////////////////////////////////

 
import java.util.*;

class Logic
{
       void  countEvenOddRange ( int num)
       {
            int evenCount  =0 ;
            int oddCount = 0 ;

            for( int i = 1 ; i <= num ; i++)
            {
                     if(i %2 ==0)
                     {
                            evenCount++ ; 
                     }
                     else
                     {
                             oddCount++ ;
                     }
            }

            System.out.println("Count of even number : "+ evenCount) ;
            System.out.println("Count of odd number : "+ oddCount) ;

       }

}

 class program102
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.countEvenOddRange(7);
       
       }
}

