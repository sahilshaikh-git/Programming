// Accept N number from the user  and Return the frequnecy  of even number



#include <stdio.h>
#include<stdlib.h>



int CountEven( int Arr[], int iLength)

{
       int iCnt =0 ;
       int iCount =0;

       for ( iCnt =0  ; iCnt <iLength ;iCnt++)
       {
           if(Arr[iCnt]%2==0)
           {
              iCount++ ;
           }
       }

       return iCount ; 

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

       iRet = CountEven(p,iSize);

       printf("Frequncy of Even count %d\n",iRet );

       free(p);

       return 0;

}
