//     Type 3

import java.util.*;

class NumberX
{
       
       public static boolean CheckDivisible(int iNo) {
              if (iNo % 3 == 0 && iNo % 5 == 0) {
                     return true;
              } else {
                     return false;
              }

       }

}

public class program44
 {
       public static void main(String[] args) {
              Scanner sobj = new Scanner(System.in);

              int iValue = 0;
              boolean bRet = false;

              System.out.println("Enter the Number : ");
              iValue = sobj.nextInt();

              bRet = NumberX.CheckDivisible(iValue); 

              if(bRet == true)
              {
                     System.out.println("divisible is 3 and 5 ");
              }
              else
              {
                     System.out.println("Divisible not by 3 and 5 ");
              }

       }

}
