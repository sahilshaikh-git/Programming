//  15 4> Accept N numbers from the users and input start poin and end point &,display all elements from the range

#include<stdio.h>
#include<stdlib.h>

void  Range(  int Arr[] ,  int iLength ,  int iStart , int iEnd )
{ 
       int iCnt =0 ;

       for ( iCnt = 0 ; iCnt <iLength ; iCnt++)
       {
              if(Arr[iCnt] >= iStart && Arr[iCnt]<= iEnd )
              {
                     printf("%d\n",Arr[iCnt]);
              }
       }

     
}

int main()
{
        int iSize =0,  iRet = 0 ,  iCnt =0 , iValue1=0 , iValue2=0;
        int*p =NULL ;
       //  BOOL bRet =FALSE  ;

        printf("Enter number of Elements :\n");
        scanf("%d",&iSize);


        printf("Enter the first elements : \n");
        scanf("%d",&iValue1);

        printf("Enter the second elements : \n");
        scanf("%d",&iValue2);

        p =(int*)malloc(iSize*sizeof(int));


        if(p==NULL)
        {
              printf("Unable to allocate the memory");
              return -1 ;
        }

        printf("Enter %d elements :\n", iSize);

        for ( iCnt = 0 ; iCnt <iSize ; iCnt++)
        {
              printf( "Enter elements %d\n" ,iCnt+1);
              scanf("%d",&p[iCnt]);
        }

       Range(p,iSize,iValue1, iValue2);

        

        free(p);

        return 0 ;


}

