////////////////////////////////////////////////////////
//
//                
//
/// ////////////////////////////////
import java.util.*;
class DigitX
{
       public boolean checkPalindrome (int iNo)
       {
              int iDigit = 0;
              int iRev= 0 ;
              int iTemp = 0;
              iTemp = iNo;


              while( iNo != 0)
              {
               iDigit = iNo %10 ;
              
               iRev = (iRev * 10 )+ iDigit  ;
              iNo = iNo/10;
              }

              if ( iTemp == iRev){

                     return true;
              }
              else 
              {
                     return false;
              }
              

       }

}
class program93
{
       public static void main(String[] args) 
       {
              Scanner sobj = new Scanner(System.in);
              DigitX dobj = new DigitX();

              int iValue = 0 ;
              boolean iRet =false;

              System.out.println("Enter number : ");
              iValue =sobj.nextInt();
              iRet =dobj.checkPalindrome(iValue);

              if ( iRet==true)
              {
                     System.out.println("Number is Palindrome");
              }
              else{
                     System.out.println("Number is not Palindrome");

              }
           

       }

}