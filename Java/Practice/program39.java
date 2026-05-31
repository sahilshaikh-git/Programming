import java.util.Scanner;

public class program39
 {

       public static void main(String[] args) 
       {      
              Scanner sobj = new Scanner(System.in);
              
              int iValue = 0 ;
              
              System.out.println("Enter the Number : ");
              iValue = sobj.nextInt();


              if(iValue%3==0 && iValue%5==0)
              {
                     System.out.println("This Number is Divisible by 3 and 5");
              }
              else
              {
                         System.out.println("This Number is  not Divisible by 3 and 5");      
              }


              
       }
       
}
