class ParkingTicket 
{
       private int ticketNumber ;
       private String VehicleNumber  ;
       private  int FloorNumber ;
       private int SpotNumber ;
       private  String entryTime ;
       
       // public ParkingTicket ( int a ,  String b  ,  int c ,  int d ,  String e)
       // {
       //        this.ticketNumber =  a ;
       //        this.VehicleNumber       =  b ;
       //        this.FloorNumber = c  ;
       //        this.SpotNumber = d ;
       //        this.entryTime = e ;
       // }

       public ParkingTicket(Builder builder)
       {
              this.ticketNumber = builder.ticketNumber ;
              this.VehicleNumber = builder.VehicleNumber ;
              this.FloorNumber = builder.FloorNumber  ; 
              this.SpotNumber = builder.SpotNumber ;
              this.entryTime  = builder.entryTime ; 

       }

       public void display()
       {
              System.out.println("Ticket Number : "+ this.ticketNumber);
              System.out.println("Vehicle  Number : "+ this.VehicleNumber);
              System.out.println("Floor Number : "+ this.FloorNumber);
              System.out.println("Spot Number : "+ this.SpotNumber);
              System.out.println("Entry Time  : "+ this.entryTime);
       }
}
class Builder 
{
       public int ticketNumber ;
       public String VehicleNumber  ;
       public  int FloorNumber ;
       public int SpotNumber ;
       public  String entryTime ;

       public Builder setTicketNumber( int  ticketNumber)
       {
              this.ticketNumber =  ticketNumber  ;
              return this   ;
              
       } 

       public Builder setVehicleNumber( String  VehicleNumber)
       {
              this.VehicleNumber =  VehicleNumber  ;
              return this   ;
              
       } 
       public Builder setFloorNumber( int  FloorNumber)
       {
              this.FloorNumber =  FloorNumber  ;
              return this   ;
              
       } 
       public Builder setSpotNumber( int  SpotNumber)
       {
              this.SpotNumber =  SpotNumber  ;
              return this   ;
              
       } 

       public Builder setEntryTime( String  entryTime)
       {
              this.entryTime =  entryTime  ;
              return this   ;
              
       } 

       public ParkingTicket build()
       {
              return  new ParkingTicket(this);
       }

}
class program987
{
       public static void main(String[] args)
       {
             ParkingTicket pobj =  new Builder()
             .setTicketNumber(11)
             .setVehicleNumber("MH!@VL9080")
             .setFloorNumber(4)
             .setSpotNumber(89)
             .setEntryTime("9:30 AM")
             .build ();
             pobj.display(); 


       }
}