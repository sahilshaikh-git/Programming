

       // write the program which accept the number from the user and check frequencby of four  in it

#include<stdio.h>

int  CountTwo( int iNo)
{      
              int iRemainder = 0;
              int iCounter = 0 ;
              if(iNo <0)
              {
                     iNo = -iNo;
              }

              while( iNo != 0 )
              {
                     iRemainder = iNo % 10 ;
                     if( iRemainder ==4 )
                     {
                            iCounter++ ;
                     }
                     
                     iNo = iNo /10;
              }

              return iCounter ;


}
int main()
{
       int iValue  = 0 , iRet = 0 ; 
       printf("Enter the Number : ");
       scanf("%d",&iValue);

       iRet = CountTwo(iValue);

       printf("Frequency of two is %d" , iRet);
       return 0 ;
}