///////////////////////////////////////////////////////////////////
//  Assignement 30 
//     write the program  which display the ASCII table  . table contains symbols ,  Decimal ,   Hexadecimal ,  Octal representation ,  
//     of every member  from 0 to  255 
//     
///////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Decimal\tSymbol\tHexadecimal\tOctal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%c\t%X\t\t%o\n", i, (unsigned char)i, i, i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}