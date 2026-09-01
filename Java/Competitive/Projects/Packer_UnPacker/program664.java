import java.io.* ;
import java.util.*;
public class program664
 {
       public static void main(String[] args) throws IOException
       {
              FileWriter fwobj =  new FileWriter("Demo.txt");
              fwobj.write("jay ganesh");

              fwobj.close();  // important

       }
       
}
