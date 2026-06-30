////////////////////////////////////////////////////////////////////////////////////
//
//            Logic Building Assignment 17
//            
//            3.  write program to find maximum of two numbers
//
//
//
////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Logic
{
       void FindMax(int num1 , int num2 )
       {
              if( num1 > num2)
              {
                     System.out.println(num1 + " : is greater");
              }
              else   
              {
                      System.out.println(num2 + " : is greater");
              }

          
       }
}
class program83
{

       
       public static void main( String A [])
       {
              Logic lobj = new Logic();
              lobj.FindMax(12, 20);
       }
}