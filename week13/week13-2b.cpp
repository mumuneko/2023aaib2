///week13-2b.cpp 希望字串很長,<10位數
///Q1:有多長?Q2:怎麼判斷
#include <stdio.h>
#include <string.h>
int main()
{
    char line[20];///長一點,比較保險
    scanf("%s",line);
    int N=strlen(line);///知道字串的長度
    int bad=0;///一開始沒有壞掉
    for(int i=0;i<N;i++){///逐字母檢查
        if(line[i]!=line[N-1-i]) bad=1;bad=1;
    }///若前後對應的字母不同就失敗
    ///0123456789共10個數字
    ///^        ^相加共計9
    /// 1      8
    ///  2    7
    ///   3  6
    ///    45
    ///    45
    ///   6  3
    ///  2    7
    /// 1      8
    ///0        9
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
