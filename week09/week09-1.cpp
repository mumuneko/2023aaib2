///week09-1.cpp 了解函式的意義
#include <stdio.h>
int myAdd(int a,int b){ ///函式定義
    return a+b;///進來兩個數，出去一個數
}
void myPrint(int a){///函式定義進來一個
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main()///main函式
{
    int ans=myAdd(3,4);///函式說明
    printf("Hello ans: %d\n",ans);
    myPrint(ans);///函式呼叫(請他幫我做事)
}
