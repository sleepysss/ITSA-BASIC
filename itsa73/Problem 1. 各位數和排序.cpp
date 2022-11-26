#include <iostream>  
#include <cstdio>  
#include <algorithm>  
  
using namespace std;  
  
struct store  
{  
    int num;  
    int sum;  
};  
  
bool cmp(struct store a,struct store b)  
{  
    if(a.sum==b.sum)  
        return a.num<b.num;  
    else  
        return a.sum<b.sum;  
}  
  
int main()  
{  
    int count,sum,x;  
    cin>>count;  
      
    struct store NUM[count];  
      
    for(int i=0;i<count;++i)  
    {  
        cin>>x;  
        NUM[i].num=x;  
        sum=0;  
          
        while(x)  
        {  
            sum+=(x%10);  
            x/=10;  
        }  
        NUM[i].sum=sum;  
    }  
      
    sort(NUM,NUM+count,cmp);  
      
    for(int i=0;i<count-1;++i)  
        cout<<NUM[i].num<<" ";  
    cout<<NUM[count-1].num<<endl;  
      
    return 0;  
} 
