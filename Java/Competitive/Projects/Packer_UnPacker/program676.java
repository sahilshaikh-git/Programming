import java.io.*;
import java.util.*;

class program675
{
    public static void main(String A[]) throws Exception
    {
       String Fname =  null  ;
       File fobj = null ;

       FileOutputStream foobj  = null ;

       Scanner sobj = new Scanner(System.in);

       System.out.println( "Enter File name ");

       Fname  = sobj.nextLine() ;

       fobj = new File(Fname);

       foobj = new FileOutputStream(fobj);


       String Data =  "Marvellous Infosystems";

       byte Arr[] = Data.getBytes() ;

       if( fobj.exists())
       {
              foobj.write(Arr);
       }
       else
       {
              System.out.println("such file is not exist ");
       }
    }
}