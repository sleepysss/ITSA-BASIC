#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    (x*x+y*y)<=(100*100)?printf("inside\n"):printf("outside\n");  //idea:a^2+b^2=c^2
    
    return 0;
}
