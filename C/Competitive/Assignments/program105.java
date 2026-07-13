//////////////////////////////////////////////////////////////
//
//     Assignment 21 - 5. Write a program to print all numbers from 1 to N that are divisible by both 2 and 3.
//         
//
/////////////////////////////////////////////////////////////

 
import java.util.*;

class Logic
{
       void  countEvenOddRange ( int num)
       {
            for( int i = 1 ; i <= num ; i++)
            {
                     if(i %2 ==0  && i%3 == 0)
                     {
                            System.out.println(i);
                     }
            }
       
       }

}

class program105
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.countEvenOddRange(30);
       
       }
}
