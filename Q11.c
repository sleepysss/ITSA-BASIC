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
        //scanf會檢查buffer,buffer有數據,則會從buffer拿數據,不讓用戶輸入!下面的for展開就是3個scanf,打100空白200enter和100enter200enter是一樣的(都給兩個變數賦值)
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
    //21~30也可直接
    // for(int i=0;i<(a*b);i++){
    //	scanf("%d",&box[i]);
    //}
    //因為反正最後都是會輸入row*column個數據,只是差在使用者分幾次輸入,一次幾個!但下面的也要跟著改
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
