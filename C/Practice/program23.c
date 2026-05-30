#include<stdio.h>

/// user defined macro  
#define AGE_INVALID -1

 int CalculateTicketprice( int iAge)
{
    // input Filter  
     if(iAge<0)
     {
     
          return AGE_INVALID ;                                     
     }
     
     if(iAge >=0  && iAge<=5)
     {
            return 0;
     }
     else if ( iAge >=6 && iAge<=18)
     {

            return 500;
     }
     else if ( iAge >=19 && iAge <=50)
     {
              return 900;
     }
     else 
     {
          return 400;
     }

}
 
int main()
{   
      int iValue =0;
      int iRet = 0;

      printf("Please Enter your age to Calculate ticket Price : " );
      scanf("%d",&iValue);

      iRet = CalculateTicketprice(iValue);

      if (iRet == AGE_INVALID)
      {
          printf("Please enter positive age");
      }
      else
      {
    
      printf("Your Ticket price will be %d rupees\n ", iRet);
      }
        

      return 0;
}