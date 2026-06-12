

       // assignemet 13 : 1 write the program which accept the number from the user andcount frequency  of such  digits  which are less  than 6  
       

#include<stdio.h>

int  Count( int iNo)
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
                     if( iRemainder < 6 )
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

       iRet = Count(iValue);

       printf("Frequency of  is %d" , iRet);
       return 0 ;
}