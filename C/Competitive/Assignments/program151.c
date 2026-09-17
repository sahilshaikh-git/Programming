// Assignemnt 30  1. write the program which accept the  string from the user and count the capital chracter 


#include<stdio.h>


int countCapital(char *str ) 
{
       int iCnt = 0 ;
       
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
                     iCnt++ ;
              }
              str++ ;
       }

       return iCnt ;


}
int main()
{
       char Arr[20];
       int iRet = 0 ;

       printf("Enter the String : ");
       scanf("%[^'\n']s" , Arr);

       iRet  = countCapital(Arr);
       printf("%d\n", iRet);

       return 0 ; 
}