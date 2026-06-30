////////////////////////////////////////////////////////////////////////////////////
//
//            Logic Building Assignment 17
//            
//            1.  write program to find the sum of all digits 
//
//
//
////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Logic
{
       void SumofDigits(int num )
       {
              int iDigit  = 0;
              while(num!= 0) 
              {
                     
                     iDigit = iDigit + ( num%10);
                     num = num /10; 

              }
              System.out.println("Sum of all Digit : "+ iDigit);

       }
}
class program81
{

       
       public static void main( String A [])
       {
              Logic lobj = new Logic();
              lobj.SumofDigits(55555);
       }
}