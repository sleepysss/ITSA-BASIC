#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,a1,a2,a3,money,fifty,five,one;
    
    scanf("%d,%d,%d,%d",&N,&a1,&a2,&a3);
    
    if(a1*15+a2*20+a3*30>=N)
        printf("0\n");
    else
    {
        money=N-(a1*15+a2*20+a3*30);
        fifty=money/50;
        money%=50;
        five=money/5;
        money%=5;
        one=money;
        printf("%d,%d,%d\n",one,five,fifty);
    }
    
    return 0;
}
