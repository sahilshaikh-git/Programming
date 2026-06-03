///////////////////////////////////////////////////////////////////////////////
//
//            Write the program which accept one number from the user and
//            print even numbers on screen
//
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNO)
{
    if(iNO <= 0)
    {
        return;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNO; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : ");

    scanf("%d", &iValue);

    printf("Printing even numbers upto %d are :\n", iValue);

    PrintEven(iValue);

    return 0;
}