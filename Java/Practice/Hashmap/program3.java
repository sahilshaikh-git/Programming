import java.util.*;

class program3 
{
       public static void main(String[] args) {
              
              HashMap <Integer , String> Students =  new HashMap<Integer ,  String >() ;

              Students.put(101, "shubham");
              Students.put(102 ,"rajesh");
              Students.put(103 ,"mangesh");

              System.out.println(Students);


               if (Students.containsKey(101))
               {
                     System.out.println("this key available");
               }

               if(Students.containsValue("mangesh"))
               {
                     System.out.println("this is value available");
               }
               else
               {
                     System.out.println("this is not available");
               }

               System.out.println(Students.get(101));

               System.out.println(Students.size());
               Students.remove(101);

               System.out.println(Students);
              
              
       }
}