#include <stdio.h>
#include <stdlib.h>

int recursive(int num)
{
    if(num==0||num==1)
        return num+1;
    else
        return recursive(num-1) + recursive(num/2);
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d\n",recursive(num));
    return 0;
}
