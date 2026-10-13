import java.net.*;
import java.io.*;


class program919
{

       public static void main(String[] args) 
       {
              try
              {

              System.out.println("-----------------------------------------");
              System.out.println("---------- Marvellous Client started -------");
              System.out.println("-----------------------------------------");


              Socket socket  = new Socket(
                                   "127.0.0.1",
                                   9000
              ) ;

              System.out.println("Connection with server successfully");


              }
              catch( Exception eobj)
              {
                            System.out.println("Exception is occured " + eobj);
              }
              

       }
}

