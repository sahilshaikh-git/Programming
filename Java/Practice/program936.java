import java.util.* ;

public  class program936
{
       public static void main(String[] args) {
              
              int Arr[]  =  {101,102,103,101,104,102,101,105,105};

              HashMap < Integer ,Integer> Frequency =  new HashMap<Integer , Integer>();

              for ( int id  : Arr)
              {
                     if (Frequency.containsKey(id))
                     {
                            Frequency.put(id, (Frequency.get(id)+1));

                     }
                     else
                     {
                            Frequency.put(id , 1);
                     }
              }
              System.out.println(Frequency);
       }
}