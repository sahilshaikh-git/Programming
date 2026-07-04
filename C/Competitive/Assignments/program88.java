///////////////////////////////////////////////////////////
//
//     Assignment no 18 
//     3) Write the program where print the number are odd upto n
//     
//
//
/////////////////////////////////////////////////////////

class Logic
{
       void printOddNumber ( int num )
       {
              int iCnt =0 ; 
              System.out.println("Odd number upto "+ num + " is ");
              for(iCnt = 1 ; iCnt <= num ; iCnt++ )
              {
                     if( iCnt % 2 !=0 )
                     {
                            System.out.println(iCnt);
                     }
              }
              
       }
}

class program88
{
       public static void main(String[] args) {
              Logic lobj = new Logic();

              lobj.printOddNumber(20);
              

       }
}