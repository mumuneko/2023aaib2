///week08-2
#include <stdio.h>
int main()
{
    printf("請輸入你的名字:");
    char s[30];
    scanf("%s",s);///不用加&s，因為%S有s了
    printf("%s 你好!",s);

}
