#include <stdio.h>  
#include <stdlib.h>  
  
int main()  
{  
    int num,flag=0;  
      
    scanf("%d",&num);  
    if(num==1)
    {
        printf("NO\n");
        return 0;
    }
    for(int i=2;i<=(num/2);++i)  
        if(!(num%i))  
        {  
            flag=1;  
            break;  
        }  
    flag?printf("NO\n"):printf("YES\n");  
      
    return 0;  
} 
