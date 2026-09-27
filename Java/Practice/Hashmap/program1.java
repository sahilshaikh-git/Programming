import java.util.*;

class program1 
{
       public static void main(String[] args) {
              
              HashMap < Integer , String> Students =  new HashMap<  Integer , String >() ;

              Students.put(101 ,"Sahil"); 
              Students.put(102 ,"Rohan"); 
              Students.put(103 ,"kartik");
              
              System.out.println(Students.get(101));
              System.out.println(Students.get(102));
              System.out.println(Students.get(103));
       }
}