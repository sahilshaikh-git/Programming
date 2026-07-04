       ///////////////////////////////////////////////////////////
       //
       //     Assignment no 18 
       //     4) Write the program find  the sum of even  and odd digits  separatly  in a number 
       //     
       //
       //
       /////////////////////////////////////////////////////////

       class Logic
       {
              void printEvenOddNumber ( int num )
              {
                     int iRemainder = 0 ; 
                     int iSum = 0 ;
                     int iSumodd = 0 ;

                     while( num !=0)
                     {
                            iRemainder = num % 10 ; 
                            
                            if( iRemainder % 2 == 0  )
                            {
                                   iSum = iSum + iRemainder;
                            }
                            else
                            {
                                   iSumodd = iSumodd + iRemainder ;
                            }

                            num = num /10 ; 

                     }

                     System.out.println("Addition of even number : " + iSum);
                     System.out.println("Addition of odd number : " + iSumodd);
              }
       }

       class program89
       {
              public static void main(String[] args) {
                     Logic lobj = new Logic();

                     lobj.printEvenOddNumber(123456);
                     

              }
       }