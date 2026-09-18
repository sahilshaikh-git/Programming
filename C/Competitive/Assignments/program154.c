// Assignemnt 30  3. write the program which accept the  string from the user 
// check whether how many vowels in it 


#include<stdio.h>


int countVowels(char *str ) 
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
              if(*str == 'A'  || *str == 'E' || *str == 'I' ||*str == 'O'  || *str == 'U' || 
                     *str == 'a'  || *str == 'e' || *str == 'i' ||*str == 'o'  || *str == 'u' )
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

       iRet  = countVowels(Arr);
       printf("%d\n", iRet);

       return 0 ; 
}