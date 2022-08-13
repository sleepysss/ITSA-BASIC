#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int num,sum=0;
    
    scanf("%d",&num);
    
    for(int i=1;i<=num;++i)
        if(!(i%3))
            sum+=i;
    printf("%d\n",sum);
      
    return 0;  
}
