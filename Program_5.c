#include<stdio.h>


int main()
{
    register int iValue = 21;
    register char cValue = 'D';

    printf("Register storage class : \n");
    printf("Integer : %d\n",iValue);
    printf("Character : %c\n",cValue);

    return 0;
}