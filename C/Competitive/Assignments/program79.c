// 15.3   Accept n number from the user and display all such numbers which contain 3 digits

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

void Digits(int Arr[], int iLength )
{
       int iCnt = 0;
       int iMin = Arr[0] ;
       int iMax = Arr[0] ;

       for ( iCnt = 0 ; iCnt< iLength  ; iCnt ++)
       {
              if(Arr[iCnt]> 100 || Arr[iCnt] <1000)
              {
                     printf("%d",Arr[iCnt]);
              }
       }
      
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

        Digits(p,iSize);

        printf("Difference of larger and smallest number\t:  %d", iRet);

        free(p);

       return 0 ;
}