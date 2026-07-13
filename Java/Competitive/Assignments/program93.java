       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 19 
       //     3) Write the program to check whether number is divisible 5 and 11 or not
       //     
       //
       //
       /////////////////////////////////////////////////////////

class Logic 
{
       void checkDivisible(int iNo)
       {
              if( iNo % 5 ==0 && iNo % 11 ==0  )
              {
                     System.out.println("number is divisible by 5 and 11");
              }
              else
              {
                     System.out.println("not divisible");
              }

       }
}

class program93
{
       public static void main(String[] args) 
       {
              Logic obj = new Logic() ;
              obj.checkDivisible(5);

              
       }
}