////////////////////////////////////////////////////////
//
//     Assignment 20 4 - write the program  to find  the largest digit in number 
//         
//
///////////////////////////////////////////////////////
// 
 
import java.util.*;

class Logic
{
       void  findLargeDigit ( int num)
       {
             int iDigit = 0 ;
             int max  = 0;

             while( num != 0)
             {
                     iDigit = num % 10 ;
                     if ( iDigit >max)
                     {
                            max = iDigit ; 
                     }
                     num = num /10 ;

             }

             System.out.println(max);
       }

}

 class program99
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.findLargeDigit(988445);
       }
}

