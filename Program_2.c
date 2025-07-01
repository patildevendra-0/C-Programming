#include<stdio.h>

int main()
{
    int iNo = 11;
    char cValue = 'D';
    float fValue = 3.14f;
    double dValue = 2.718281828459045;

    printf("Integer : %d\n",iNo);
    printf("Character : %c\n",cValue);
    printf("Float : %f\n",fValue);
    printf("Double : %lf\n",dValue);

    printf("Value with precesion 2: \n");

    printf("Float : %.2f\n",fValue);
    printf("Double : %.2lf\n",dValue);

    return 0;
}