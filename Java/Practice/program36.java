import java.util.*;

public class Program36
{
       public static void main(String[] args) {
              Scanner sobj = new Scanner(System.in);
              String sName = null ;
              int iAge = 0;
              float fMarks = 0.0f ;


              System.out.println("Enter you name : ");
              sName =  sobj.nextLine();


              
              System.out.println("Enter your Age  : ");
              iAge =  sobj.nextInt();


              
              System.out.println("Enter your Marks  : ");
              fMarks =  sobj.nextFloat();


              
              System.out.println("Your Name is "+ sName);
              System.out.println("Your Age is "+ iAge);
              System.out.println("Your Marks is "+ fMarks);    



       }
}