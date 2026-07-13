////////////////////////////////////////////////////////
//
//     Assignment 20 1 - write the program  to find the sum of all even number up to N
//     queation 1 
//
//
///////////////////////////////////////////////////////
// 
 
import java.util.*;

class Logic
{
       void sumEvenNumber ( int num)
       {
              int i =0 ;
              int sum = 0 ;
              for(i =1 ; i<=num ; i++)
              {
                     if( i % 2 == 0 )
                     {
                            sum = sum + i ;
                     }
              } 
             
              System.out.println("summation of all digits  :" + sum ) ;
       }

}

 class program96
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.sumEvenNumber(10);
       }
}

