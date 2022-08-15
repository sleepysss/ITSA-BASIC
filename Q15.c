#include <stdio.h>
#include <stdlib.h>

int main()
{
    char store[101];
    int count[26]={0},word=0;
    
    gets(store);
    
    //convert all small letter to big
    for(int i=0;store[i];++i)
    {
        if(store[i]>=97&&store[i]<=122)
            store[i]=store[i]-32;
    }
    
    for(int i=0;store[i];++i)
    {
        if(store[i]==' ')
            word++;
        if(store[i]>=65&&store[i]<=90)
            count[store[i]-65]++;
    }
    word++; //space+1=word
    printf("%d\n",word);
    for(int i=0;i<26;++i)
        if(count[i])
            printf("%c : %d\n",i+97,count[i]);
    
    return 0;
}
