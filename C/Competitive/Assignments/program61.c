

       //  Accept N numbers  from the user  and return  diffrence between summation of even number and summation of odd number 

       

#include<stdio.h>
#include<stdlib.h>

int Difference (int Arr[] , int iLength)
{
       int iCnt = 0 ;
       int  iEvenSum = 0 ; 
       int  iOddSum = 0 ; 

       for ( iCnt = 0  ; iCnt < iLength  ; iCnt ++)     
       {

              if( Arr[iCnt ] % 2 == 0 )
              {
                     iEvenSum = iEvenSum + Arr[iCnt ];
              }
              else {
                     iOddSum = iOddSum + Arr[iCnt ];
              }

       }

       return iEvenSum - iOddSum ;

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

       iRet = Difference(p ,iSize);

       printf("Result is %d ", iRet );

       free(p);

       return 0 ;

}