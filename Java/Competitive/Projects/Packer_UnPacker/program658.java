import java.io.*;


class program658 
{
       public static void main(String[] args) {
              
              try
              {
                     File fobj  = new File ("Demo.txt");

                     if(fobj.exists())
                     {
                            System.out.println("fille already created");
                     }
                     else
                     {
                            fobj.createNewFile();
                            System.out.println("File get successfully created ");
                     }


                     
              }
              catch( IOException e)
              {
                     System.out.println(e);

              }
              catch( Exception eobj )
              {
                     System.out.println(eobj);

              }
       }
}