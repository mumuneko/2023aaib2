///week11-1.cpp�z�l�k
///�H�e���g�k�A�n30�U+30�U=900����
///�οz�l�k�A�u�n30�U+���������Ǯ�l�A��20�U��
#include <stdio.h>
int table[20000]={};///����l�A����0
int main()
{
    int BOUND=20000,ans=0;
    for(int i=2;i<BOUND;i++){
        if(table[i]==0){///�ٯd�ۡA�S���Q����
            ans++;
            for(int k=i*i;k<BOUND;k+=i){
                table[k]=-1;///�����L���S��
            }
        }
    }
    printf("��Ʀ�:%d��\n",ans);
}
