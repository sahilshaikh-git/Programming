#include <stdio.h>
#include <stdlib.h>

int CountFrequency(int Arr[], int iLength)
{
    int iCount = 0;
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt]==11)
        {
            iCount++;
        }
    }
    return iCount;
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
    iRet = CountFrequency(Brr, iLength);
    printf("CountFrequency of 11 is %d\n", iRet);

    free(Brr);

    return 0;
}