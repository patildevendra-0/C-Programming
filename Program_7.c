#include<stdio.h>

void ConstantDemo()
{
    const int iValue = 11;
    // iValue ++;                 ERROR  :   increment of read-only variable ‘iValue’
}

void VolatileDemo()
{
    volatile int iValue = 11;
    iValue ++;
    
    printf("Volatile value : %d\n",iValue);
}

int main()
{
    ConstantDemo();
    VolatileDemo();

    return 0;
}



//Real-Life Analogy:
//      1. Imagine you're watching a clock in a room. 
//          If someone keeps updating the clock behind your back, 
//          you have to look at it every time you need the time.

//      2. Without volatile: 
//          Compiler might say, "Oh, I just read the clock once, I'll reuse that value." (Optimization)

//      3. With volatile: 
//          Compiler says, "Let me re-read the clock every time, because it might have changed!" (No optimization)