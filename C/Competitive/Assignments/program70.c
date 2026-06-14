//assignment 14 -5> Accept N numbe from the user  and accept one  another  number as NO , return frequency of NO of Form it ;

#include<stdio.h>
#include<stdlib.h>

int  DisplayFreq (int Arr[] , int iLength, int iNO)
{
       int iCnt = 0 ;
       int  iCount = 0 ; 
       

       for ( iCnt = 0  ; iCnt < iLength  ; iCnt ++)     
       {

              if( Arr[iCnt ]  ==iNO)
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

       printf("Enter the number :");
       scanf("%d", &iValue);

       

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


       iRet = DisplayFreq(p ,iSize,iValue);

       printf("Result Frequency of  %d is %d", iValue,iRet );


       free(p);

       return 0 ;

}