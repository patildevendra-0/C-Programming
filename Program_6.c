#include<stdio.h>

void Pre_Increment()
{
    int iCnt = 11;
    iCnt++;
    printf("Pre Increment : %d\n",iCnt);
}

void Post_Increment()
{
    int iCnt = 21;
    printf("Before Increment : %d\n",iCnt);
    iCnt++;
    printf("Post Increment : %d\n",iCnt);
}

void Pre_Decrement()
{
    int iCnt = 12;
    iCnt--;
    printf("Pre Decrement : %d\n",iCnt);
}

void Post_Decrement()
{
    int iCnt = 21;
    printf("Before Decrement : %d\n",iCnt);
    iCnt--;
    printf("Post Decrement : %d\n",iCnt);

}

int main()
{

    printf("----------------------------------------------\n");
    printf("INCREMENT : \n");
    Pre_Increment();
    Post_Increment();
    printf("----------------------------------------------\n");


    printf("----------------------------------------------\n");
    printf("DECREMENT : \n");
    Pre_Decrement();
    Post_Decrement();
    printf("----------------------------------------------\n");

  


    return 0;
}