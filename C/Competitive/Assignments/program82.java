////////////////////////////////////////////////////////////////////////////////////
//
//            Logic Building Assignment 17
//            
//            2.  write program check whether number is palindrome or NOT
//
//
//
////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Logic
{
       void SumofDigits(int num )
       {
              int NumX  = num;
       
              
              int iRemainder =  0 , iDigit =0 ; 

              while(num != 0)
              {
                     iRemainder = num %10 ;
                     iDigit = (iDigit*10) + iRemainder ;
                     num = num /10 ;
              }

              if( iDigit == NumX)
              {
                     System.out.println("Number is palindrome");
              }
              else
              {
                     System.out.println("Number is not palindrome ");
              }



       }
}
class program82
{

       
       public static void main( String A [])
       {
              Logic lobj = new Logic();
              lobj.SumofDigits(1233);
       }
}