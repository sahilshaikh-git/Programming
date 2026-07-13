////////////////////////////////////////////////////////////////////////////////////
//
//            Logic Building Assignment 17
//            
//            4 .  write program to minimum of three number
//
//
//
////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Logic
{
       void FindMin(int num1 , int num2 , int num3)
       {
              if( num1 < num2 && num1 < num3)
              {
                     System.out.println(num1 + " : is smaller");
              }
              else if( num2 < num3 && num2 < num1 ) 
              {
                      System.out.println(num2 + " : is smaller");
              }
              else
              {
                     System.out.println(num3 + " : is smaller ");
              }

          
       }
}
class program84
{

       
       public static void main( String A [])
       {
              Logic lobj = new Logic();
              lobj.FindMin(52, 2,34);
       }
}