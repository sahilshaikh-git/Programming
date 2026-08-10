
import java.io.*;
class program661
{
       public static void main(String[] args) 
       {
              File fobj = null ;
              boolean bRet = false  ;

              try
              {
                     
              fobj = new File("Demo.txt");
        

              bRet  = fobj.exists();


              if(bRet )
              {
                     fobj.delete();
                     System.out.println("FIle is deleted  successfully");

              }
              else
              {
                     System.out.println("Such file does not exist");     

              }
              }
              catch( Exception eobj)
              {
                     System.out.println(eobj);
              }


       }
}