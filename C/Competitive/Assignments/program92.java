       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 19 
       //     2) Write the program to display grade of student ased on marks
       //     
       //
       //
       /////////////////////////////////////////////////////////

class Logic 
{
       void displayGrade(int marks)
       {
              if (marks < 0 || marks > 100)
               {
            System.out.println("Invalid Marks");
                 }
                 else if ( marks >= 90)
                 {
                     System.out.println("Grade A");
                 }
              else if ( marks >=80 )      
              {
                       System.out.println("Grade B");
              }
              else if ( marks >= 70)
              {
                       System.out.println("Grade C");
              }
              else if ( marks>= 60)
              {
                       System.out.println("Grade D");
              }
              else
              {
                       System.out.println("Grade  E");
              }

       }
}

class program92
{
       public static void main(String[] args) 
       {
              Logic obj = new Logic() ;
              obj.displayGrade(555);

              
       }
}