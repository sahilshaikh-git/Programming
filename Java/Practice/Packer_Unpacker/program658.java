
import java.io.*;
class program658
{
       public static void main(String[] args) 
       {
              try
              {
                     
              File fobj = new File("Demo.txt");

              if(fobj.exists())
              {
                     System.out.println("FIle is already is exists");

              }
              else
              {
                     fobj.createNewFile();      
                     System.out.println("File is created successfully ");     

              }
              }
              catch( IOException iobj)
              {
                     System.out.println(iobj);
              }
              catch( Exception eobj)
              {
                     System.out.println(eobj);
              }


       }
}