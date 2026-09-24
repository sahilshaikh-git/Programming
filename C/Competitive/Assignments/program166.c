//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 33
//       4) Write the program which accept the string from the user and 
//            and copy the contents of the string to another 
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void RevStr(char * str  , char *cpy)
{

     while(*str != '\0')
     {
            *cpy =  *str ;
              str++ ;
              cpy++ ;

     }
     *cpy = '\0' ;


}
int main()
{
       char Arr[20] = {'\0'};
       char Brr[20] = {'\0'};


       printf("Enter the string : \n");
       scanf("%[^\n]s" ,  Arr);

       RevStr(Arr ,Brr);

            printf(" This is new String : %s" , Brr);


       return 0 ;
}