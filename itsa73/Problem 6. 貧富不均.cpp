#include <iostream>  
#include <cmath>  
#include <algorithm>  
  
using namespace std;  
  
bool cmp(int a,int b)  
{  
    return a>b;  
}  
  
int main()  
{  
    int count,num,sum;  
    cin>>count;  
      
    for(int i=0;i<count;++i)  
    {  
        cin>>num;  
        sum=0;  
        double d_money;  
        int store[num],i_money,percent;  
        for(int j=0;j<num;++j)  
            cin>>store[j];  
        sort(store,store+num,cmp);  
          
        for(int j=0;j<num;++j)  
        {  
            if(j>=1&&store[j]==store[j-1])  
            {  
                sum+=i_money;  
                continue;  
            }  
            percent=ceil((double)(j*100)/(double)num);  
            if(percent<=10)  
                d_money=store[j]*0.4;  
            else if(percent>=11&&percent<=30)  
                d_money=store[j]*0.3;  
            else if(percent>=31&&percent<=60)  
                d_money=store[j]*0.2;  
            else if(percent>=61&&percent<=80)  
                d_money=store[j]*0.1;  
            else  
                d_money=0.0;  
                  
            if((((int)(d_money*10))%10)>=5)  
            {
             
                i_money=d_money+1;  
            }  
            else  
                i_money=d_money;  
            sum+=i_money;  
        }  
        cout<<sum<<endl;  
    }  
      
    return 0;  
}  
