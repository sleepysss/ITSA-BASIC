#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x,y,t1,t2;
    double degree;
    cin>>t1>>t2;
    
    t1=60*t1;
    t2=60*t2;
    
    for(int i=t1;i<=t2;++i) //在時間段內每分鐘檢查一次
    {
        //看i對應到幾點幾分(12小時制)
        x=(i/60)%12; 
        y=i%60;
        
        //x*6+0.5*y:時針所在位置
        //y*6:分針所在位置
        degree=x*30+0.5*y-y*6;
        degree=degree>0?degree:-degree;
        
        if(degree>180)
            degree=360-degree;
        
        if(degree>=88&&degree<=92)
            printf("%02d:%02d degree=%.2f\n",i/60,y,degree);
    }

    return 0;
}
