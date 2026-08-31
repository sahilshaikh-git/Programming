import java.io.* ;

public class program657
 {

       public static void main(String[] args)  throws IOException
       {
              try
              {
              File fobj = new File("Demo.txt");
              System.out.println(fobj.exists());

              }
              catch ( Exception e)
              {
                     System.out.println( e);
              }

              
       }
       
}

