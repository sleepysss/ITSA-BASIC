#include <stdio.h>
#include <stdlib.h>

int main()
{
    int store[8], num, i = 0, stack[8] = { 0 };

    scanf("%d", &num);

    if (num >= 0)
    {
        while (num != 0)
        {
            stack[i++] = num % 2; //i為stack的top
            num /= 2;
        }
        for (int j = 0; j < 8; ++j)
            store[j] = stack[7 - j];  //stack中教大的index為較高的bit
    }
    else
    {
        //負數的2補數:將其對應正數按位取反再加1
        num = -num;
        while (num != 0)
        {
            stack[i++] = num % 2;
            num /= 2;
        }
        for (int j = 0; j < 8; ++j)
            store[j] = stack[7 - j];
        //bitwise
        for (int j = 0; j < 8; ++j)
            store[j] = !store[j];
        //add 1
        for (int j = 7; j >= 0; --j)
        {
            if (store[j])
                store[j] = 0;
            else
            {
                store[j] = 1;
                break;
            }
        }
    }
    for (int j = 0; j < 8; ++j)
        printf("%d", store[j]);
    printf("\n");

    return 0;
}
