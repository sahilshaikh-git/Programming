///////////////////////////////////////////////////////////////////
//   
//      Accept Character from the user  , if the character if small then corresponding chacter is 
//      display otherwise the capital their small character is display its corresponding number 
//   
//     
///////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display( char ch )
{
   if( ch >= 65 && ch <= 90)
   {
        while(ch <= 90)
        {
            printf("%c\t" , ch);
            ch++ ;
        }
   }
   else if( ch >= 97 && ch <= 122)
   {
        while(ch >= 97)
        {
             printf("%c\t" , ch);
            ch-- ;
        }

   }
   else
   {
        return  ; 
   }

}

int main()
{
    char cValue = '\0';

    printf("Enter the Charater : ");
    scanf("%c" , & cValue );

    Display(cValue);

    return 0;
}      