#include<stdio.h>

int G_iNo = 21;
char G_cValue = 'D';
float G_fValue = 3.14f;
double G_dValue = 56.5874154986;

void GlobalVariables()
{
    printf("PRINTING THE GLOBAL VARIABLES : \n");
    printf("Integer : %d\n",G_iNo);
    printf("Character : %c\n",G_cValue);
    printf("Float : %f\n",G_fValue);
    printf("Double : %lf\n",G_dValue);
}

void LocalVariables()
{
    int L_iNo = 51;
    char L_cValue = 'D';
    float L_fValue = 2.456f;
    double L_dValue = 89.235989;

    printf("PRINTING THE LOCAL VARIABLES : \n");
    printf("Integer : %d\n",L_iNo);
    printf("Character : %c\n",L_cValue);
    printf("Float : %f\n",L_fValue);
    printf("Double : %lf\n",L_dValue);
}

int main()
{
    LocalVariables();
    printf("\n");
    GlobalVariables();

    return 0;
}