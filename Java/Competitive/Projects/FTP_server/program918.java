import java.net.*;
import java.io.*;


class program918 
{

       public static void main(String[] args) 
       {
              try
              {

              ServerSocket serversocket =  new ServerSocket( 9000);

              System.out.println("-----------------------------------------");
              System.out.println("---------- Marvellous Server started -------");
              System.out.println("-----------------------------------------");

              System.out.println( "Server is waiting for client request ");

              Socket clientsocket =  serversocket.accept();
              System.out.println("client connected successfully   ");

              }
              catch( Exception eobj)
              {
                            System.out.println(eobj);
              }
              

       }
}

