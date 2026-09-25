//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 33
//       4) Write the program which accept the string from the user and
//            and copy the capital chracter of the string into the another string
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CapitalCopy (char *str  ,  char *nstr)
{
       

       while( *str !=  '\0' )
       {
              if(*str >= 'A' && *str<= 'Z')
              {
                     *nstr = *str ;
                     nstr++ ;

              }      
              str++ ;        
       }

       *nstr = '\0';

}
int main()
{
       char Arr[50] ; 
       char Brr[50] ;
       
       printf("Enter the string : \n");
       scanf( "%[^\n]s" ,  Arr);

       printf("%s\n" ,Arr);

       CapitalCopy(Arr , Brr);

       printf("This is capital character : %s\n"   , Brr) ;




}
