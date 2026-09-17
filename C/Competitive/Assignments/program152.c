// Assignemnt 30  2. write the program which accept the  string from the user and count the small chracter 


#include<stdio.h>


int countSmall(char *str ) 
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
              if(*str >= 'a' && *str <= 'z')
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

       iRet  = countSmall(Arr);
       printf("%d\n", iRet);

       return 0 ; 
}