///////////////////////////////////////////////////////////
//
//     Assignment no 18 
//     2) Write the program where print the number are even upto n
//     
//
//
/////////////////////////////////////////////////////////

class Logic
{
       void printEvenNumber ( int num )
       {
              int iCnt =0 ; 
              System.out.println("Even number upto "+ num + " is ");
              for(iCnt = 1 ; iCnt <= num ; iCnt++ )
              {
                     if( iCnt % 2 ==0 )
                     {
                            System.out.println(iCnt);
                     }
              }
              
       }
}

class program87
{
       public static void main(String[] args) {
              Logic lobj = new Logic();

              lobj.printEvenNumber(20);
              

       }
}