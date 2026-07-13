////////////////////////////////////////////////////////
//
//     Assignment 20 1 - write the program  to check whether number is perfect or not 
//     queation 3
//
//
///////////////////////////////////////////////////////
// 
 
import java.util.*;

class Logic
{
       void checkPerfect ( int num)
       {
              int i ; 
              int sum = 0;

               
              for(i =1 ;i<num/2; i++)
              {
                     if(num % i ==0)
                     {
                                   sum = sum + i ;
                     }
              }
              
              if( sum == num)
              {
                     System.out.println("number is perfect");
              }
              else
              {
                     System.out.println("number is not perfect");
              }
                    
             

       }

}

 class program98
{
       public static void main( String A[])
       {
              Logic obj = new Logic();
              obj.checkPerfect(7);
       }
}

