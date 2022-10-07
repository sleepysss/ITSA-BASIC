#include <stdio.h>
#include <stdlib.h>

int partition(int store[],int start,int end)
{
    int j=start-1,temp,pivot=store[end];
    for(int i=start;i<end;++i)
    {
        if(store[i]<pivot)
        {
            j++;
            temp=store[j];
            store[j]=store[i];
            store[i]=temp;
        }
    }
    j++;
    temp=store[j];
    store[j]=store[end];
    store[end]=temp;
    return j;
}

void quicksort(int store[],int start,int end)
{
    if(start<end)
    {
        int pivot=partition(store,start,end);
        quicksort(store,start,pivot-1);
        quicksort(store,pivot+1,end);
    }
}

int main()
{
    char c;
    int n,store[20],count=0,candidate,frequency,flag=0;
    
    while(scanf("%d",&n)!=EOF)
    {
        store[count++]=n;
        c=getchar();
        if(c=='\n') //one iteration
        {
            if(count==1)
            {
                printf("%d\n",store[0]);
                count=0;
                flag=0;
                continue;
            }
            quicksort(store,0,count-1);
            candidate=store[0];
            frequency=1;
            for(int i=1;i<count;++i)
            {
                if(store[i]==candidate)
                    frequency++;
                else
                {
                    candidate=store[i];
                    frequency=1;
                }
                
                if(frequency>(count/2))
                {
                    printf("%d\n",candidate);
                    flag=1;
                    break;
                }
            }
            if(!flag)
                printf("NO");
            count=0;
            flag=0;
        }
    }
    return 0;
}
