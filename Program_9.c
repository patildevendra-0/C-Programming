#include<stdio.h>

void For_Loop_Demo()
{
    int iArr[10] = {10,20,30,40,50,60,70,80,90,100};

    int iCnt = 0;
    
    for(iCnt = 0;iCnt<sizeof(iArr)/sizeof(iArr[0]);iCnt++)
    {
        printf("%d\n",iArr[iCnt]);
    }
}

void While_Loop_Demo()
{
    int iArr[10] = {10,20,30,40,50,60,70,80,90,100};
    int iCnt = 0;
    int iSize = sizeof(iArr)/sizeof(iArr[0]);

    while (iCnt < iSize)
    {
        printf("%d\n",iArr[iCnt]);
        iCnt++;
    }
}

void Do_While_Loop_Demo()
{
    
}


int main()
{


    return 0;
}