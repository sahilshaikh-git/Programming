#include <stdio.h>
#include <stdlib.h>

int Summation(int Arr[], int iLength)
{
    int iSum = 0;
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0, iCent = 0;
    int *Brr = NULL;
    int iRet = 0;
    printf("Enter the number of element :\n");
    scanf("%d", &iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for (iCent = 0; iCent < iLength; iCent++)
    {
        scanf("%d", &Brr[iCent]);
    }
    iRet = Summation(Brr, iLength);
    printf("Summation ids %d\n", iRet);

    free(Brr);

    return 0;
}