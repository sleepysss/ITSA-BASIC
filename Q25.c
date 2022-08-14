#include <stdio.h>
#include <stdlib.h>

int main()
{
    char store[33];
    int num,count,i,j;
    scanf("%d",&num);
    while((j=getchar())!=EOF&&j!='\n');
    while(num--)
    {
        count=0;
        gets(store);
        for(i=0;store[i]!='\0';++i)
            if(store[i]>=32&&store[i]<=126)  //沒這個if會錯
                count=count+store[i];
        printf("%d\n",count);
    }
    
    return 0;
}
