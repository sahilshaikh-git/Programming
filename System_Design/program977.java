enum VehicleType 
{
       BIKE,
       CAR, 
       TRUCK
}

abstract class Vehicle 
{
       private  String number ;

       public Vehicle (String number )
       {
              this.number = number ;

       }

       public String  getNumber()
       {
              return this.number ;
       }

        public abstract  void display();
  
}

class Bike extends Vehicle
{
       public  Bike ( String number)
       {
              super(number );
       }
        
       public void display()
       {
              System.out.println("Bike : " + getNumber());
       }
}

class Car extends Vehicle
{
        public  Car ( String number)
       {
              super(number );
       }
        
       public void display()
       {
              System.out.println("Car : " + getNumber());
       }

}
class Truck extends Vehicle 
{
        public  Truck ( String number)
       {
              super(number );
       }
        
       public void display()
       {
              System.out.println("Truck : " + getNumber());
       }

}

public class program977 {
       
       public static void main(String[] args)
       {
              Car cobj =  new Car( "MH12BA4007");

              cobj.display();

              Truck tobj = new Truck("MH23gf4554");
              tobj.display();

       }
}
