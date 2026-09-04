import java.io.*;
import java.util.*;

class program677
{
    public static void main(String A[]) throws Exception
    {
       String Fname =  null ;
       File fobj= null  ;
       FileInputStream fiobj = null ;

       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter the file name ");
       Fname =  sobj.nextLine() ;

       fobj = new File(Fname ) ; 

       fiobj = new FileInputStream(fobj);

       byte Arr[] =  new byte[50];

       if(fobj.exists())
       {
              fiobj.read(Arr);
              System.out.println(new String (Arr));
       }
       else
       {
              System.out.println("Their is no such files");
       }
    }
}