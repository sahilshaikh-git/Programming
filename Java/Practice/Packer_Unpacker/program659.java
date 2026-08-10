
import java.io.*;
class program659
{
       public static void main(String[] args) 
       {
              try
              {
                     
              File fobj = new File("Demo.txt");
              boolean bRet = false  ;

              bRet  = fobj.exists();


              if(bRet )
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