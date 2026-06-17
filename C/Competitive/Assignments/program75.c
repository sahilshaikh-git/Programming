//  15 4> Accept N numbers from the users and return product of all odd elements 

#include<stdio.h>
#include<stdlib.h>

int  Range(  int Arr[] ,  int iLength  )
{ 
       int iCnt =0 ;
       int oddpro = 1;

       int bflag = 0 ;

       for ( iCnt = 0 ; iCnt <iLength ; iCnt++)
       {
              if(Arr[iCnt] %2 !=0 )
              {
                     oddpro = oddpro * Arr[iCnt];
                     bflag =1;
              }
       }
       if(bflag == 0)
       {
              return 0 ;
       }

       return oddpro ;
     
}

int main()
{
        int iSize =0,  iRet = 0 ,  iCnt =0 , iValue1=0 , iValue2=0;
        int*p =NULL ;
       //  BOOL bRet =FALSE  ;

        printf("Enter number of Elements :\n");
        scanf("%d",&iSize);



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

       iRet = Range(p,iSize);

       if(iRet ==0)
       {
              printf("their is no odd number in this array");
       }
       else
       {
       printf("this product of odd number is : %d", iRet);
       }

        

        free(p);

        return 0 ;


}

