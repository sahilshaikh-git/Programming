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
       /// 
       /// 
       /// 

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

       class program997
       {
              public static void main(String[] args)
              {
                     

              }
       }