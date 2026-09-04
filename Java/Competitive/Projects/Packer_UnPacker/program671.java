import java.io.*;
import java.util.*;

class program671
{
    public static void main(String A[])
    {
              String Fname =  null ;
              File fobj = null ;

              Scanner sobj=  new Scanner(System.in);
              System.out.println("Enter the file name : ");

              Fname = sobj.nextLine();

              fobj =  new  File( Fname );

              if( fobj.exists())
              {
                     System.out.println("File name :    " +fobj.getName());
                     System.out.println("Get absolute path:    " +fobj.getAbsolutePath());
                     System.out.println("File size  :" + fobj.length());

              }
              else
              {
                     System.out.println("their is no such files");
              }

    }
}