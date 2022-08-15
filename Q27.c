#include <stdio.h>

int main()
{
    char ans[5];
    char num[5];
    int i,A,B;
    
    scanf("%s",ans);
    while((i=getchar())!=EOF&&i!='\n');
    for(;;)
    {
        scanf("%s",num);
        if((num[0]+num[1]+num[2]+num[3])==192)  //0+0+0+0=192
            break;
        while((i=getchar())!=EOF&&i!='\n');
        A=0;
        B=0;
        for(i=0;i<4;++i)  //traverse every bit of ans
        {
            for(int j=0;j<4;++j)  //traverse every bit of num
            {
                if(ans[i]==num[j]&&i==j)
                {
                    A++;
                    break; //because num will not repeat
                }
                    
                if(ans[i]==num[j])
                {
                    B++;
                    break;
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }

    return 0;
}
