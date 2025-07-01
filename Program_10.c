#include<stdio.h>

void If_Else_Demo()
{
    int iArr[10] = {10, 21, 30, 41, 50, 61, 70, 81, 90, 111};
    int iCnt = 0;
    int iSize = sizeof(iArr) / sizeof(iArr[0]);

    for(int iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(iCnt%2 == 0)
        {
            printf("EVEN NUMBER : %d\n",iArr[iCnt]);
        }
        else
        {
            printf("ODD NUMBER : %d\n",iArr[iCnt]);
        }
    }
}

void If_Else_Demo_Sorting()
{
    int iArr[10] = {10, 21, 30, 41, 50, 61, 70, 81, 90, 111};
    int iCnt = 0;
    int iSize = sizeof(iArr) / sizeof(iArr[0]);

    int iSortedArr[10];
    int EvenIndex = 0;
    int OddIndex = (sizeof(iSortedArr)/sizeof(iSortedArr[0]))-1;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iArr[iCnt] %2 == 0)
        {
            iSortedArr[EvenIndex] = iArr[iCnt];
            EvenIndex++;
        }
        else
        {
            iSortedArr[OddIndex] = iArr[iCnt];
            OddIndex--;
        }
    }

    printf("Sorted Array:\n");
    for(iCnt = 0; iCnt < EvenIndex; iCnt++)
    {
        printf("EVEN NUMBER : %d\n", iSortedArr[iCnt]);
    }

    for(iCnt = iSize-1; iCnt >= EvenIndex; iCnt--)
    {
        printf("ODD NUMBER : %d\n", iSortedArr[iCnt]);
    }
}

int main()
{
    If_Else_Demo();
    printf("\n");
    If_Else_Demo_Sorting();
    printf("\n");

    return 0;
}