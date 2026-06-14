// Accept N number from the user  and Return  contain 11 or not



#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;



BOOL  Check( int Arr[], int iLength)

{
       int iCnt =0 ;
       

       for ( iCnt =0  ; iCnt <iLength ;iCnt++)
       {
           if(Arr[iCnt]==11)
           {
              return TRUE;
           }
       }

       return FALSE ;



}
int main()
{
       int iSize = 0, iRet =0 ,iCnt = 0 ;

       int*p  =NULL ;

       printf("Enter the Number of Elements\n ");
       scanf("%d", &iSize);

       p = (int*)malloc(iSize * sizeof(int));

       if(p==NULL)
       {
              printf("Unable to alocate the memory\t");
              return -1 ;
       }

       printf("Enter %d element :\n" ,iSize);

       for(iCnt = 0 ; iCnt <iSize ; iCnt++)
       {
              printf("Enter the elements :%d\n",iCnt+1);
              scanf("%d",&p[iCnt]);
       }

       iRet = Check(p,iSize);

       if(iRet ==TRUE)
       {
              printf("Contain the 11");
       }
       else
       {
              printf("Not contain 11 ");
       }

       free(p);

       return 0;

}
