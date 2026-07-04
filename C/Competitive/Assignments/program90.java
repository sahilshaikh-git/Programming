       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 18 
       //     5) Write the program check whether number is positive , negative or zero 
       //     
       //
       //
       /////////////////////////////////////////////////////////

       class Logic
       {
              void checkSign ( int num )
              {
                     
                     if( num ==0){
                            System.out.println("number is zero");
                     }
                     else if( num >0 )
                     {
                            System.out.println("number is positive");
                     }
                     else 
                     {
                            System.out.println("number is negative");
                                          
                     }
              }
       }

       class program90
       {
              public static void main(String[] args) {
                     Logic lobj = new Logic();

                     lobj.checkSign(0);
                     

              }
       }