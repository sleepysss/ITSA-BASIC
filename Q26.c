#include <stdio.h>
#include <stdlib.h>

int add(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+(num%10);
        num/=10;
    }
    return sum;
}

int main()
{
    int amount,smallest_index,temp1,temp2;
    int *ptr1, *ptr2;
    
    scanf("%d",&amount);
    ptr1=(int *)malloc(sizeof(int)*amount);  //value
    ptr2=(int *)malloc(sizeof(int)*amount);  //sum of bit
    for(int i=0;i<amount;++i)
        scanf("%d",&ptr1[i]);
    for(int i=0;i<amount;++i)
        ptr2[i]=add(ptr1[i]);
    
    //selection sort
    for(int i=0;i<amount;++i)
    {
        smallest_index=i;  //default
        for(int j=i+1;j<amount;++j)
        {
            if((ptr2[j]<ptr2[smallest_index])||(ptr2[j]==ptr2[smallest_index]&&ptr1[j]<ptr1[smallest_index]))
                smallest_index=j;
        }
        //switch
        temp1=ptr1[i];
        ptr1[i]=ptr1[smallest_index];
        ptr1[smallest_index]=temp1;
        temp2=ptr2[i];
        ptr2[i]=ptr2[smallest_index];
        ptr2[smallest_index]=temp2;
    }
    
    for(int i=0;i<amount;++i)
    {
        printf("%d",ptr1[i]);
        if(i!=(amount-1))
            printf(" ");
    }
    printf("\n");
    
    return 0;
}
