#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int amount,num1_a,num1_b,num2_a,num2_b,result_a,result_b,something;
    char op;
    
    scanf("%d",&amount);
    
    for(int i=0;i<amount;++i)
    {
        while((something=getchar())!=EOF&&something!='\n'); //clean buffer
        scanf("%c %d %d %d %d",&op,&num1_a,&num1_b,&num2_a,&num2_b);
        
        switch(op)
        {
            case '+':
                result_a=num1_a+num2_a;
                result_b=num1_b+num2_b;
                break;
            case '-':
                result_a=num1_a-num2_a;
                result_b=num1_b-num2_b;
                break;
            case '*':
                result_a=num1_a*num2_a-num1_b*num2_b;
                result_b=num1_a*num2_b+num1_b*num2_a;
                break;
            case '/':
                result_a=(num1_a*num2_a+num1_b*num2_b)/(num2_a*num2_a+num2_b*num2_b);
                result_b=(num1_b*num2_a-num1_a*num2_b)/(num2_a*num2_a+num2_b*num2_b);
                break;
            default:
                break;
        }
        printf("%d %d\n",result_a,result_b);
    }
    
    return 0;
}
