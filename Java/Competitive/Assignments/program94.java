       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 19 
       //     4) Write the program to print each digit of  number separatly
       //     
       //
       //
       /////////////////////////////////////////////////////////

class Logic 
{
       void printDigits(int iNo)
       {
              int iDigit = 0 ;

              while( iNo != 0)
              {
                     iDigit = iDigit*10 + (iNo%10);
                     iNo = iNo /10 ;
              }
              while( iDigit != 0)
              {
              
                    System.out.print(iDigit %10+ "\t");
                    iDigit = iDigit /10 ;
              }

       }
}

class program94
{
       public static void main(String[] args) 
       {
              Logic obj = new Logic() ;
              obj.printDigits(5321);

              
       }
}