
import java.io.*;
import java.util.*;
class program662
{
       public static void main(String[] args) 
       {
              File fobj = null ;
              boolean bRet = false  ;
              String Fname = null ;
              Scanner sobj = null ;

              sobj = new Scanner (System.in);

              System.out.println("Enter the File Name  :");
              Fname = sobj.nextLine();

              

              try
              {
                     
              fobj = new File(Fname);
        

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