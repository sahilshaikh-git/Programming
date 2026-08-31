import java.io.* ;

public class program656
 {

       public static void main(String[] args)  throws IOException
       {
              try
              {
              File fobj = new File("Demo.txt");

              fobj.createNewFile();  
              }
              catch( IOException eobj)
              {
                     System.out.println(eobj);
              }
              catch ( Exception e)
              {
                     System.out.println( e);
              }

              
       }
       
}
