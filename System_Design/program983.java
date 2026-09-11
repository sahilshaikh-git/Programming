class ParkingTicket 
{
       public int ticketNumber ;
       public String VehicleNumber  ;
       public  int FloorNumber ;
       public int SpotNumber ;
       public String entryTime ;
       
       public ParkingTicket ( int a ,  String b  ,  int c ,  int d ,  String e)
       {
              this.ticketNumber =  a ;
              this.VehicleNumber       =  b ;
              this.FloorNumber = c  ;
              this.SpotNumber = d ;
              this.entryTime = e ;
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

class program983
{
       public static void main(String[] args)
       {
              ParkingTicket p1 =  new ParkingTicket(11, "MH12VL9999", 3, 89, "9:30 AM");
              ParkingTicket p2 =  new ParkingTicket(12, "MH14VL9999", 4, 32, "9:50 AM");

              

       }
}