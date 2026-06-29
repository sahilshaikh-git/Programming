// 15.2  Enter the smallest element in array

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

int SmallNum(int Arr[], int iLength )
{
       int iCnt = 0;
       int iMin = Arr[0] ;

       for ( iCnt = 0 ; iCnt< iLength  ; iCnt ++)
       {
              if(Arr[iCnt]< iMin)
              {
                     iMin = Arr[iCnt];
              }
       }

       return iMin ; 
 }


int main()
{
       int iSize= 0 ,iRet = 0 , iCnt =0 , iValue =0 ;

        int*p = NULL ;

        printf("Enter the Elements :  \n");
        scanf("%d", &iSize);

        

        p = (int *)malloc(iSize * sizeof(int));

        if(p==NULL){
              printf("unable to allocate the memory ");
              return -1 ;

        }
        printf("Enter %d element\n", iSize);

        for(iCnt = 0 ; iCnt <iSize ; iCnt++)
        {
              printf("Enter the Elements %d\n",iCnt +1);
              scanf("%d",&p[iCnt]);
        }

        iRet = SmallNum(p,iSize);

        printf("Smallest number is %d", iRet);

        free(p);

       return 0 ;
}