
class Demo  
{

       public int  i , j ;

       public Demo setI( int no)
       {
              this.i = no ;
              return this  ; 
              
       }
       public Demo setJ( int no)
       {
              this.j = no ;
              return this  ; 

       }

       public void display()
       {
               System.out.println("i :" + i);
               System.out.println("j :" + j);
       }
}


interface ParkingObserver
{
       void update( int availableSlots);


}

class displayBored implements ParkingObserver
{
       public void update ( int availableSlots)  
       {
              System.out.println("Displat Board :  " + availableSlots);
       }    
}

class MobileApplication implements ParkingObserver
{
       public void update ( int availableSlots)  
       {
              System.out.println("Mobile Application :  " + availableSlots);
       }    
}

class parkingFloor 
{
       private int availableSlots ;

       public parkingFloor ( int availableSlots)
       {
              this.availableSlots =  availableSlots ;
       }
}



class program994
{
       public static void main(String[] args) {

              parkingFloor floor   =  new parkingFloorarkingFloor(5);


       }

  

       
}