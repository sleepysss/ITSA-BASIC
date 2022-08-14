#include <stdio.h>
#include <stdlib.h>

int main()
{
    int column,row,num;
    int *ptr;
    
    scanf("%d %d",&column,&row);
    ptr=(int *)malloc(sizeof(int)*column*row);
    
    
    //每次輸入是輸入一行,
    //if array 為 4 7 4   [0] [1] [2]
    //            6 8 6   [3] [4] [5] 
    //則會輸入
    //3 2  (行 列)
    //4 6  (第一行)
    //7 8  (第二行)
    //4 6  ..
    for(int i=0;i<column;++i)
    {
        num=i;  //base (第i行起始的index)
        //讓多個變數賦值,而不用用一堆%d,且%d無法寫死,見C quick review的2-(1)和32,且%d會忽略white space
        for(int j=0;j<row;++j)  //每一行會有row個數字,他們的index為差column  (base+offset的概念)
        {
            scanf("%d",&ptr[num]);
            num+=column;
        }
    }
    //測試
    //for(int i=0;i<row*column;++i)
    //    printf("%d ",ptr[i]);
    //printf("\n");
    
    num=0;
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<column;++j)
        {
            printf("%d",ptr[num]);
            num++;
            if(j!=(column-1)) //最後不能多空白
                printf(" ");
        }
        printf("\n");
    }
    
    free(ptr);
    return 0;
}
