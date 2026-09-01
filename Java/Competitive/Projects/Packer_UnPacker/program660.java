import java.io.*;


class program660
{
       public static void main(String[] args) {
              
              File fobj = null ;
              boolean bRet =  false ;

              try
              {
                     fobj =  new File("Demo.txt");
                     bRet = fobj.exists();

                     if(bRet)
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

              System.out.println(fobj.getName()  );
       }
}