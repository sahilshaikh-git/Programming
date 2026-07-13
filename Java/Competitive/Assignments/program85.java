////////////////////////////////////////////////////////////////////////////////////
//
//            Logic Building Assignment 17
//            
//            5 .  write program to print the multiplication of table
//
//
//
////////////////////////////////////////////////////////////////////////////////////


import java.util.*;

class Logic
{
       void printTable(int num)
       {
              int iCnt = 0 ;
             for(iCnt =1  ; iCnt <= 10 ; iCnt++  )
             {
                     System.out.println(num*iCnt);
             }

          
       }
}
class program85
{

       
       public static void main( String A [])
       {
              Logic lobj = new Logic();
              lobj.printTable(5);
       }
}