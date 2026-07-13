////////////////////////////////////////////////////////
//
//     Assignment 20 5 - write the program  to find  the smallest digit in number 
//         
//
///////////////////////////////////////////////////////
// 
 
import java.util.*;

class Logic
{
       void  findSmallestDigit ( int num)
       {
             int iDigit = 0 ;
             int min  = 9;
              

             while( num != 0)
              {
                     
                     iDigit = num % 10 ;
                    
                     if ( min > iDigit) 
                     {      
                            min  = iDigit ;
                     }

                     num = num /10 ;

             }

             System.out.println(min);
       }

}

 class program100
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.findSmallestDigit(988445);
       }
}

