///註解:從今天考試程式出發(copy)
///複習上週教的printf()的f格式 
#include <stdio.h>
int main()
{
    int a,b;
    printf("請輸入兩個整數:");///先印中文，提示你輸入
    scanf("%d %d",&a,&b);///scanf()要加&符號
    printf("你現在輸入了2個數字,直式加法:\n");
    printf("%5d\n",a);///印出來，5格的整數，後面\n跳行
    printf("%5d\n",b);///印出來，5格的整數，後面\n跳行
    printf("------\n");///印出一堆減號，後面\n跳行
    printf("%5d\n",a+b);///印出來，5格的整數，後面\n跳行
}
