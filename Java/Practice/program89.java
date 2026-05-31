////////////////////////////////////////////////////////
/// //
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// 
/// ////////////////////////////////
import java.util.*;
class DigitX
{
       public int  SumDigits(int iNo)
       {
              int iDigit =0;
              int iSum = 0 ;

              while( iNo != 0)
              {
              iDigit= iNo%10;
              iSum = iSum + iDigit;
              iNo = iNo/10;
              }

              return iSum;

       }

}
class program89
{
       public static void main(String[] args) 
       {
              Scanner sobj = new Scanner(System.in);
              DigitX dobj = new DigitX();

              int iValue = 0 ;
              int iRet =0;

              System.out.println("Enter number : ");
              iValue =sobj.nextInt();
              iRet =dobj.SumDigits(iValue);

              System.out.println("summation of digitss  : "+iRet);

       }

}