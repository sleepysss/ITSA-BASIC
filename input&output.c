#include <stdio.h>
#include <stdlib.h>

int main()
{
    //任意輸入組數且各組數量不限(最多10個數字)之加法
    //input:    4 5 6
    //          50 20 10 50 90 45 63 
    //          (可繼續任意組)
    //Output:   15
    //          328
    
    char c;
    int n,store[10],count=0,sum;
    //linux按ctrl+D可模擬EOF,windows則是ctrl+Z再按enter
    while(scanf("%d",&n)!=EOF)
    {
        store[count++]=n;
        c=getchar();
        if(c=='\n') //one iteration
        {
            sum=0;
            for(int i=0;i<count;++i)
                sum+=store[i];
            printf("%d\n",sum);
            count=0;
        }
    }
    return 0;
}
