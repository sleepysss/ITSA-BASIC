#include <stdio.h>
#include <stdlib.h>

int main()
{
    int money,total_time;
    int start_h,start_m,end_h,end_m;
    
    scanf("%d %d",&start_h,&start_m);
    scanf("%d %d",&end_h,&end_m);
    
    //借位
    if(end_m<=start_m)
    {
        end_m+=60;
        end_h-=1;
    }
    
    total_time=(end_h-start_h)*60+(end_m-start_m);
    
    if(total_time<30)
        money=0;
    else if(total_time>=30&&total_time<=120)
        money=(total_time/30)*30;   //c除法的小數部分為無條件捨去
    else if(total_time>120&&total_time<=240)
        money=30*4+((total_time-120)/30)*40;  //2hr's money + >2hr's money
    else
        money=30*4+40*4+((total_time-240)/30)*60;
        
    printf("%d\n",money);
    
    return 0;
}
