//  15 3> Accept N numbers from the users and accept  one another  number as NO,  return  index of last occurence  of that NO ;

#include<stdio.h>
#include<stdlib.h>

int  lastOcc(  int Arr[] ,  int iLength ,  int iNo )
{ 
       int iCnt =0 ;

       for ( iCnt = iLength ; iCnt >=0 ; iCnt--)
       {
              if(Arr[iCnt] == iNo)
              {
                     return iCnt ;
              }
       }

       return -1;
}

int main()
{
        int iSize =0,  iRet = 0 ,  iCnt =0 , iValue=0 ;
        int*p =NULL ;
       //  BOOL bRet =FALSE  ;

        printf("Enter number of Elements :\n");
        scanf("%d",&iSize);


        printf("Enter the number : \n");
        scanf("%d",&iValue);

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

        iRet = lastOcc(p,iSize,iValue);

        if(iRet == -1 )
        {
                     printf("There is no such number \n");
        }
        else
        {
                     printf("First occurence  of number  is %d\n", iRet );
        }

        free(p);

        return 0 ;


}

