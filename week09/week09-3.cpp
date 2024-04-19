///week09-3.cpp 函式裡的變數vs外面的變數
#include <stdio.h>
int globalA=300;///外面的全域變數
void myFuncA(){
    int localA=500;///裡面的區域變數
    globalA=0;///亂改外面的變數
    printf("main(): globalA:%d localA:%d\n",globalA,localA);
}
int main()
{
    int localA=200;///裡面的區域變數
    printf("main(): globalA:%d localA:%d\n",globalA,localA);
    myFuncA();
    printf("main(): globalA:%d localA:%d\n",globalA,localA);
}
