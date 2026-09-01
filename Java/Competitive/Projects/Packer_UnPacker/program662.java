import java.io.*;
import java.util.Scanner;


class program662
{
       public static void main(String[] args) {
              
              File fobj = null ;
              boolean bRet =  false ;
              String Fname = null ;
              Scanner sobj = null ;

              sobj = new Scanner(System.in);

              System.out.println("Enter the file name : ");
              Fname = sobj.nextLine();

              try
              {
                     fobj =  new File(Fname);
                     bRet = fobj.exists();


                     if(bRet== true )
                     {
                            fobj.delete();
                            System.out.println("file get deleted successfully");
                     }
                     else
                     {
                            System.out.println("Their is no such file ");
                     }

  
              }
              catch( Exception eobj )
              {
                     System.out.println(eobj);

              }

    
       }
}