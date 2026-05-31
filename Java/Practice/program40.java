import java.util.*;

public class program40

{

       void CheckDivisible(int iNo) {
              if (iNo % 3 == 0 && iNo % 5 == 0) {
                     System.out.println("Number is divisible by 3 and 5");
              } else {
                     System.out.println("Numbe is  not divisible by 3 and  5 ");
              }

       }

       public static void main(String[] args) {
              Scanner sobj = new Scanner(System.in);

              int iValue = 0;

              System.out.println("Enter the Number : ");
              iValue = sobj.nextInt();

              CheckDivisible(iValue); // Error because you call from the static method to non static method

       }

}
