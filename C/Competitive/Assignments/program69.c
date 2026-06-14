// display the freqency of 11 in the input

       

#include<stdio.h>
#include<stdlib.h>

int  DisplayFreq (int Arr[] , int iLength)
{
       int iCnt = 0 ;
       int  iCount = 0 ; 
       

       for ( iCnt = 0  ; iCnt < iLength  ; iCnt ++)     
       {

              if( Arr[iCnt ]  ==11)
              { 
                     iCount++ ;
              }
              
       }

       return iCount ;



}
int main()
{
       int iValue  = 0 , iRet = 0 , iCnt =0 ,iSize = 0 ; 

       int *p =NULL ;

       printf("Enter the Number of Elements : \n");
       scanf("%d", & iSize);

       

       p = (int*)malloc(iSize* sizeof(int));

       if(p == NULL)
       {
              printf("Unable to allocate the memory");
       }

       printf( "Enter the %d elements \n ", iSize);

       for(iCnt = 0;iCnt <iSize ;iCnt++) 
       {
              printf( "Enter the Elements : %d\n " ,iCnt +1);
              scanf("%d", &p[iCnt]); 
       }


       iRet = DisplayFreq(p ,iSize);

       printf("Result is %d ", iRet );


       free(p);

       return 0 ;

}