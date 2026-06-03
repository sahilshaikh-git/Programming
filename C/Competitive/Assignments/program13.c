//////////////////////////////////////////////////////////////
//
//                   Accpt the one character from the user and convert case of character
//                   input : a     output : A
//                       input : D     output : d
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include <ctype.h>

char DisplayConvert ( char CValue)
{
       if (isupper(CValue)   )
       {
              
              printf("%c",tolower(CValue));
       }
       else if(islower(CValue))
       {
              printf("%c",toupper(CValue));
       }
}
#include<stdio.h>

int  main()
{

       char cValue = '\0';

       printf("Enter the Chacter : ");
       scanf("%c",&cValue);
       DisplayConvert(cValue);
       return 0 ;
}