/*
       ParkingLot Automation System

       Step 1 : Create required enums
       Step 2 : Vehicle Hierarchy creation
       Step 3 : VehicleFactory creation ( Factory pattern)
       Step 4 : ParkingSpot Hierarchy
       Step 5 : ParkingObserver  Class 
       Step 6 : Parking Floor Class 
       Step 7 : ParkingDisplayoard ( Observer Pattern)
       Step 8 : ParkingStratergy (Strategy Pattern)
       Step 9: PricingStrategy Class (Strategy Pattern)
       Step 10: PaymentStrategy class
       Step 11: ParkingTicket Class
       Step 12: EntryGate Class
       Step 13 : ExitGate Class
       Step 14 : ParkingLot Class (Singleton Pattern)
       Step 15: Main class (Controller)


 */       
       
       import java.util.*;
       import java.time.Duration ;
       import java.time .LocalDateTime ;

       // Represnt the differnt types of vehicles supported by the project 
       enum VehicleType 
       {
              BIKE ,
              CAR ,
              TRUCK
       }

       // represent different type of the parking spots
       enum SpotType 
       {
              BIKE ,
              CAR ,
              TRUCK

       }

       // represent the current state of the parking ticket
       enum TicketStatus 
       {
              ACTIVE , 
              CLOSE 
       }

       ////////////////////////////////////////////////////////////////////
       //      Step  2 :  Create the vehivle class hierarchy 
       //     it is used to create the  multiple type of classes which
       //     represent the type of vehicle 
       //     Concept : abstraction , inheritance ,  Polymorphism ,  Encapsulation
       //////////////////////////////////////////////////////////////


       // class which represent a generic vehicle type
       abstract class Vehicle 
       {
              // Abstracted ahidden characteristics of class 

              private String vehicleNumber ;
              private  VehicleType vehicleType ;

              // paramtrised constrcutor 
              public Vehicle ( String vehicleNumber  , VehicleType vehicleType )
              {
                     this.vehicleNumber = vehicleNumber ;
                     this.vehicleType =  vehicleType ;
              }

              // Concreate getter method
              public VehicleType getVehicleType()
              {
                     return  this.vehicleType  ;
              }

              public String getVehicleNumber ()
              {
                     return this.vehicleNumber ;
              }

              // every concreate class will provide it own defination 
              public abstract void display();

       }
       // class represnt the vehicle type BIKE
       class Bike extends Vehicle
       {
              public Bike ( String vehicleNumber)
              {
                     // calls vehicle class constructor
                     super ( vehicleNumber , VehicleType.BIKE);

              }

              // Method overridding 
              @Override 
              public void display()
              {
                     System.out.println("Bike : " + getVehicleNumber());
              }
       }
       // class represnt the vehicle type Car
       class Car extends Vehicle
       {
              public Car  ( String vehicleNumber)
              {
                     // calls vehicle class constructor
                     super ( vehicleNumber , VehicleType.CAR);

              }

              // Method overridding 
              @Override 
              public void display()
              {
                     System.out.println("Car : " + getVehicleNumber());
              }
       }

       // class represnt the vehicle type Truck
       class Truck extends Vehicle
       {
              public Truck ( String vehicleNumber)
              {
                     // calls vehicle class constructor
                     super ( vehicleNumber , VehicleType.TRUCK);

              }

              // Method overridding 
              @Override 
              public void display()
              {
                     System.out.println("Truck : " + getVehicleNumber());
              }
       }

///////////////////////////////////////////////////////////////////
//      Step  3 :  Create the vehicleFactory class
//     it is used to centralised the creation of the vehicle objects 
//     Concept : Factory Design Pattern 
//////////////////////////////////////////////////////////////

class VehicleFactory
{
       // Create and return the desired class object 
       
       public static Vehicle creatVehicle( VehicleType type  ,  String number )
       {
              switch( type)
              {
                     case BIKE :
                            return new Bike(number);

                     case CAR :
                            return new Car(number);

                     case TRUCK :
                            return new Truck(number);
                     
                     default: 
                            throw new IllegalArgumentException("Invalid Vehicle type");

              }
       }
}

abstract class ParkingSpot
{
       // unique number for parking spot ( primarykey)
       private int SpotNumber ;

       //  type of parking type 
       private SpotType spotType ;

       // indicates whether spot is currently occupied of not 
       private boolean occupied ;

       // store information about vehicle 
       private Vehicle vehicle ;

       public ParkingSpot( int spotNumber , SpotType spotType)
       {
              this.SpotNumber  = spotNumber ;
              this.spotType  = spotType ;

              // Initialised with default values 
              this.occupied = false ;
              this.vehicle = null ;
       }

       public int getSpotNumber ()
       {
              return this.spotNumber ;

       }

       public SpotType getSpotType()
       {
              return this.spotType ;

       }

       public boolean isOccupied()
       {
              return  this.occupied ;
       }

       public Vehicle getvehicle ()
       {
              return  this.vehicle ;
       }

       // it is used to park the vehicle 
       public void parkVehicle ( Vehicle vehicle )
       {
              if( this.occupied == true )
              {
                     throw new RuntimeException("Parking spot is already occupied ");

              }
              else
              {
                     Vehicle temp =  vehicle ;
                     this.occupied = true ; 
              }
       }

       public Vehicle removeVehicle()
       {
              if ( this.occupied == true)
              {
                      Vehicle temp =  vehicle ;

                     this.vehicle = null ;
                     this.occupied = false ; 

                     return  temp ;
              }
              else
              {
                     throw new RuntimeException("Parking spot is already empty");
              }
       }

       // this method decides whether we can park it in the spot or not  
       public abstract boolean canFitVehicle(Vehicle vehicle);

       public void Display()
       {
              System.out.println("Spot  : " + SpotNumber + " [ " + spotType + "]");

              if( this.occupied == true)
              {
                     System.out.println("Occupied by   :" + vehicle.getVehicleNumber());
              }
              else
              {
                     System.out.println("Spot is available");
              }

       }
}      // end of parking spot 

class BikeSpot  extends  ParkingSpot
{
       public BikeSpot ( int spotNumber)
       {
              super ( spotNumber ,  SpotType.BIKE );
       }

       @Override 
       public boolean canFitVehicle( Vehicle vehicle)
       {
              if( vehicle.getVehicleType()  == VehicleType.BIKE ) 
              {
                     return true ;
              }
              else
              {
                     return false ;
              }
       }


}

class CarSpot  extends  ParkingSpot
{
       public CarSpot ( int spotNumber)
       {
              super ( spotNumber ,  SpotType.CAR );
       }

       @Override 
       public boolean canFitVehicle( Vehicle vehicle)
       {
              if( vehicle.getVehicleType()  == VehicleType.CAR ) 
              {
                     return true ;
              }
              else
              {
                     return false ;
              }
       }
}

class TruckSpot  extends  ParkingSpot
{
       public TruckSpot ( int spotNumber)
       {
              super ( spotNumber ,  SpotType.TRUCK );
       }

       @Override 
       public boolean canFitVehicle( Vehicle vehicle)
       {
              if( vehicle.getVehicleType()  == VehicleType.TRUCK ) 
              {
                     return true ;
              }
              else
              {
                     return false ;
              }
       }
}

class program999
       {
              public static void main(String[] args)
              {
                     

              }
       }