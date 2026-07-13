//////////////////////////////////////////////////////////////
//
//     Assignment 21 1 - write the program  to calculate the product of all number 
//         
//
//////////////////////////////////////////////////////////////

 
import java.util.*;

class Logic
{
       void  productofDigits ( int num)
       {
            int mul = 1 ;
            while(num != 0 )
            {
                     mul = mul * ( num % 10);
                     num = num / 10 ;

            }
            System.out.println(mul);
       }

}

 class program101
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.productofDigits(234);
       
       }
}

