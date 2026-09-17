// Assignemnt 30  3. write the program which accept the  string from the user give the difference of capital and small letter frwquency 


#include<stdio.h>


int countSmall(char *str ) 
{
       int iCnt = 0 ;
       int iCntBig = 0 ;
       int iCntSmall = 0 ;
       
       //
       if(*str == '\0')
       {
              printf("Please enter the valid string");
              return  0 ;
       }

       while(*str != '\0')
       {
              if(*str >= 'A' && *str <= 'Z')
              {
                     iCntBig++ ;
              }
              if(*str >= 'a' && *str <= 'z')
              {
                     iCntSmall++ ;
              }
              str++ ;
       }

        iCnt = iCntBig-iCntSmall ;

        return iCnt ;


}
int main()
{
       char Arr[20];
       int iRet = 0 ;

       printf("Enter the String : ");
       scanf("%[^'\n']s" , Arr);

       iRet  = countSmall(Arr);
       printf("%d\n", iRet);

       return 0 ; 
}