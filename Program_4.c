#include<stdio.h>

int G_iNo = 21;
char G_cValue = 'D';
float G_fValue = 3.14f;
double G_dValue = 56.5874154986;

void GlobalVariables()
{
    printf("PRINTING THE GLOBAL VARIABLES WITH ADDRESS: \n");
    printf("Integer : %d\t Address : %p\n",G_iNo,(void*)&G_iNo);
    printf("Character : %c\t Address: %p\n",G_cValue,(void*)&G_cValue);
    printf("Float : %f\t Address : %p\n",G_fValue,(void*)&G_fValue);
    printf("Double : %lf\t Address : %p\n",G_dValue,(void*)&G_dValue);
}

void LocalVariables()
{
    int L_iNo = 51;
    char L_cValue = 'D';
    float L_fValue = 2.456f;
    double L_dValue = 89.235989;

    printf("PRINTING THE LOCAL VARIABLES WITH ADDRESS: \n");
    printf("Integer : %d\t Address : %p\n",L_iNo,(void*)&L_iNo);
    printf("Character : %c\t Address : %p\n",L_cValue,(void*)&L_cValue);
    printf("Float : %f\t Address : %p\n",L_fValue,(void*)&L_fValue);
    printf("Double : %lf\t Address : %p\n",L_dValue,(void*)&L_dValue);
}

int main()
{
    LocalVariables();
    printf("\n");
    GlobalVariables();

    return 0;
}