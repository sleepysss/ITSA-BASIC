#include <stdio.h>

int main()
{
    int special,f1,f2,f3,amount,num,money=0,prize[7]={0};
    int cpy_f1,cpy_f2,cpy_f3;
    scanf("%d%d%d%d%d",&special,&f1,&f2,&f3,&amount);
    
    cpy_f3=f3;
    cpy_f2=f2;
    cpy_f1=f1;
    
    while(amount--)
    {
        f1=cpy_f1;  //set to default value
        f2=cpy_f2;
        f3=cpy_f3;
        scanf("%d",&num);
        if(num==special)
        {
            prize[0]++;
            money+=2000000;
            continue;
        }
        if(num==f1||num==f2||num==f3)
        {
            prize[1]++;
            money+=200000;
            continue;
        }
        //fix,把最高位刪掉
        num=num-10000000*(num/10000000);
        f1=f1-10000000*(f1/10000000);
        f2=f2-10000000*(f2/10000000);
        f3=f3-10000000*(f3/10000000);
        if(num==f1||num==f2||num==f3)
        {
            prize[2]++;
            money+=40000;
            continue;
        }
        
        num=num-1000000*(num/1000000);
        f1=f1-1000000*(f1/1000000);
        f2=f2-1000000*(f2/1000000);
        f3=f3-1000000*(f3/1000000);
        if(num==f1||num==f2||num==f3)
        {
            prize[3]++;
            money+=10000;
            continue;
        }
        
        num=num-100000*(num/100000);
        f1=f1-100000*(f1/100000);
        f2=f2-100000*(f2/100000);
        f3=f3-100000*(f3/100000);
        if(num==f1||num==f2||num==f3)
        {
            prize[4]++;
            money+=4000;
            continue;
        }
        
        num=num-10000*(num/10000);
        f1=f1-10000*(f1/10000);
        f2=f2-10000*(f2/10000);
        f3=f3-10000*(f3/10000);
        if(num==f1||num==f2||num==f3)
        {
            prize[5]++;
            money+=1000;
            continue;
        }
        
        num=num-1000*(num/1000);
        f1=f1-1000*(f1/1000);
        f2=f2-1000*(f2/1000);
        f3=f3-1000*(f3/1000);
        if(num==f1||num==f2||num==f3)
        {
            prize[6]++;
            money+=200;
            continue;
        }
    }
    
    printf("%d %d %d %d %d %d %d\n",prize[0],prize[1],prize[2],prize[3],prize[4],prize[5],prize[6]);
    printf("%d\n",money);

    return 0;
}
