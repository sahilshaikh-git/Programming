import java.io.* ;
import java.util.*;
public class program665
 {
       public static void main(String[] args) 
       {
              FileWriter fwobj = null ;

              try
              {
                     fwobj =new FileWriter("Demo.txt");
                     fwobj.write("hello india ");
                     fwobj.close();

              }
              catch( IOException iobj) 
              {
                     System.out.println(iobj);

              }
              finally
              {
                     
              }


       }
       
}
