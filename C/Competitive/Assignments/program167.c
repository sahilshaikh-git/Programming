//////////////////////////////////////////////////////////////////////////////////
//    
//      Assignment No  : 33
//       4) Write the program which accept the string from the user and 
//            and copy the contents of the string to another upto the specifc counter
//       
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CopyString(char *str  , char *cpy,int iCnt)
{

     while(*str != '\0' && iCnt !=0)
     {
            *cpy =  *str ;
              str++ ;
              cpy++ ;       
              iCnt-- ;

     }
     *cpy = '\0' ;


}
int main()
{
       char Arr[] = "Marvellous Multi 05" ;
       char  Brr [50]  ; 

       CopyString(Arr ,Brr , 10);

       printf(" This is new String : %s" , Brr);


       return 0 ;
}