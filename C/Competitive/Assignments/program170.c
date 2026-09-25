//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 33
//       5) Write the program which accept two  the strings from the user and
//            concat the second string after the first string 
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ConcatString (char *str  ,  char *src)
{
       

       while( *str !=  '\0' )
       {
            str++ ;
       }

       while(*src !=  '\0')
       {
              *str= *src ;
              src++ ;
              str++ ;
       }
       *str =  '\0' ;
       

}
int main()
{
       char Arr[100] ; 
       char Brr[50] ;
       
       printf("Enter the first string : \n");
       scanf( "%[^\n]s" ,  Arr);

       printf("Enter the second  string : \n");
       scanf( " %[^\n]s" ,  Brr);
   

       ConcatString(Arr , Brr);

       printf("This is concat String : %s\n"   , Arr) ;




}
