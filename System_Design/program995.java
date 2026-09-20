
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

       private List<ParkingObserver> observers =  new ArrayLists<ParkingObserver>();
       public parkingFloor ( int availableSlots)
       {
              this.availableSlots =  availableSlots ;
       }
       

       public void addObservers( ParkingObserver observer)
       {
              observers.remove(observer);
       }

       public  void  VehicleParked( )
       {
              availableSlots-- ;
              notifyObserver();
              
       }
       public  void  VehicleExited( )
       {
              availableSlots++ ;
              notifyObserver();

       }

       private void notifyObserver()
       {
              for(ParkingObserver observer : observers)
              {
                     observer.update(availableSlots);
              }
       }
}



class program995
{
       public static void main(String[] args) {

              parkingFloor floor   =  new parkingFloor(5);

              displayBored board =  new displayBored() ;
              MobileApplication app=  new  MobileApplication() ;

              floor.addObservers(board);
              floor.addObservers(app);

              floor.VehicleParked();

              System.out.println("------------------------------------------------------");

              floor.VehicleExited(); 
              


       }

  

       
}