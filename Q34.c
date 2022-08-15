#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height,sex;
    
    while(scanf("%d %d",&height,&sex)!=EOF)
    {
        if(sex==1)
            printf("%.1f\n",(height-80)*0.7);
        else
            printf("%.1f\n",(height-70)*0.6);
    }
    
    return 0;
}
