///////////////////////////////////////////////////////////
//
//     Assignment no 18 
//     1) Write the program whether check number is prime or not
//     
//
//
/////////////////////////////////////////////////////////

class Logic
{
       void checkPrime ( int num )
       {
              int iCnt = 0 ;
              int iCounter = 0 ;
              if( num <= 1 )
              {
                     System.err.println("Cannot find number  , ");
              }
              for( iCnt = 2 ;  iCnt < num/2 ; iCnt++)
              {
                     if( num % iCnt == 0)
                     {
                            iCounter++ ;

                     }
            
              }
              if(iCounter == 0)
              {
                     System.out.println("Number is prime ");
              }
              else
              {
                     System.out.println("number is not prime ");
              }
       }
}

class program86
{
       public static void main(String[] args) {
              Logic lobj = new Logic();

              lobj.checkPrime(11);
              

       }
}