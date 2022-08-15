#include <stdio.h>
#include <stdlib.h>

int main()
{
    char store[101];
    int shift;
    
    gets(store);
    scanf("%d",&shift);
    
    for(int i=0;store[i];++i)
    {
        if(store[i]>=48&&store[i]<=57)
            store[i]=(store[i]-48+shift)%10+48; //用取餘的概念  1=11mod(10),且mod 10的結果為0~9,所以要先移到0~9,最後再移回去
        else if(store[i]>=65&&store[i]<=90)
            store[i]=(store[i]-65+shift)%26+65;
        else if(store[i]>=97&&store[i]<=122)
            store[i]=(store[i]-97+shift)%26+97;
    }
    
    printf("%s\n",store);
    
    return 0;
}
