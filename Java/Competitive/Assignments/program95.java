       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 19 
       //     5 ) Write the program to  print the power of number using loop
         //     
       //
       //
       /////////////////////////////////////////////////////////

class Logic 
{
       void printPower(int base , int exp)
       { 
              int iRet =1 ;
              int iCnt = 0;
             for( iCnt = 1 ; iCnt <= exp ; iCnt ++ )
             {
                     iRet  = iRet * base;
             }

             System.out.println(iRet);
       }
}
              
class program95
{
       public static void main(String[] args) 
       {
              Logic obj = new Logic() ;
              obj.printPower(2,5);

              
       }
}