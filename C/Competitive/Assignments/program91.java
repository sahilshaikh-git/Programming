       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 19 
       //     5) Write the program check whether year is leap or not
       //     
       //
       //
       /////////////////////////////////////////////////////////

class Logic 
{
       void checkLeapYear(int year)
       {

              if( (year % 4 ==0 &&  year % 100 != 0)  || year %400 ==0 )
              {
      
                     System.out.println("year ist leap year");        
              }       
              else
              {
                     System.out.println("year is not leap year");
              }
             
       }
}

class program91
{
       public static void main(String[] args) 
       {
              Logic obj = new Logic() ;
              obj.checkLeapYear(2024);

              
       }
}