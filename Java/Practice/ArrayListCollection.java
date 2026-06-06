import java.util.*;
import java.lang.*;
import java.io.*;



class ArrayListCollection                                                                                          //     Collection ArrayList
{
       public static void main(String[] args) throws Exception
       {
              // Now create the array list
              ArrayList <String> A= new ArrayList <String> ();

              A.add("First");
              A.add("Second");
              A.add("Third");
              A.add("Fourth");
              A.add("Five");

              System.out.println("\nContent of Arraylist : \n" + A);
              
              // we can insert a new data at specified position
              
              A.add(3,"new");
              System.out.println("\nContent of Arraylist : \n" + A);
              
              
              // we can insert data at last
              A.add("Last");
              System.out.println("\nContent of Arraylist : \n" + A);
              
              // we can remove from the specified position            INDEXING START FROM 0 SO THAT IT WILL REMOVE THIRD ELEMENT WHICH IS NEW
              A.remove(3);
              System.out.println("\nContent of Arraylist : \n" + A);
              
              // we can replace from specified position and add new member at specified position
              
              A.set(3,"update member");
              System.out.println("\nContent of Arraylist : \n" + A);


              System.out.println("\nNumber of ELement in ArrayList : " + A.size());

              A.add("Third");
              System.out.println("\n First Occurence of ArrayList : " + A.indexOf("Third"));
              System.out.println("\n Last Occurence of ArrayList : "+  A.lastIndexOf("Third"));


              // WE CAN USE ITERATOR TO iterate the ArrayList

              System.out.println("Iterating the ArrayList :");

              Iterator IT = A.iterator();

              while(IT.hasNext())
              {      
                     System.out.println("\t"+IT.next() + " ");
              }

              // we can remove the all elements in arraylist

              A.clear();
       }
}