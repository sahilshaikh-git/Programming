import  java.util.*;
class Demo  
{

       public int  i , j ;

       public Demo fun()
       {
              return  this ;
       }

       public int gun()
       {
               return  11 ;
       }
}

class program988 
{
       Demo dobj =  new Demo() ;

       int ret  =  dobj.fun().gun() ;

       System.out.println(ret);
}