
class Demo
{
       public  int i,j ;
       private   Demo()
       {
              System.out.println("object created");
              
              this.i = 0 ;
              this.j = 0 ;
       }
}
public class program971 {
       
       public static void main(String[] args)
       {
              Demo obj1 = new Demo();
              Demo obj2= new Demo();



       }
}
