//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 32
//       4) Write the program which accept the string from the user and reverse the 
//            String
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RevStr(char * str )
{
     char *start =  NULL ;

     start = str ;

     while(*str != '\0')
     {
              str++ ;
     }
     str-- ;

     while(start <=  str )
     {
            printf("%c" , *str);
            str-- ;
     }
     

}
int main()
{
       char Arr[20] ;

       printf("Enter the string : \n");
       scanf("%[^\n]s" ,  Arr);

       RevStr(Arr);


       return 0 ;
}