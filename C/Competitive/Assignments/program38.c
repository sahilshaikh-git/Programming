/////////////////////////////////////////////////////////////////////////////
//
//            Accept number from the user and if it in km comvert it into meter
//
//
///////////////////////////////////////////////////////////////////////////////




#include<stdio.h>    
int KMtoMeter (int iNO)
{
       int KM = 0 ;

       KM = iNO * 1000;

       return KM ;
}

int main()
{
       int iValue = 0 ;
       int iRet = 0 ;


       printf("Enter the Distance : ");
       scanf("%d",&iValue);


       iRet =KMtoMeter(iValue);
       
       printf("Total Distance in  %d Meter ",iRet);

       return 0 ;
}