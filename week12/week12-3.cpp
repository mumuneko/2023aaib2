#include <stdio.h>
int main()
{
    int n=2;
    int a[2][2]={{10,20},{11,22}};
    int b[2][2]={{2,1},{3,2}};
    int c[2][2];
    ///�W�g�Ъ�part1Ū��ơC���]�n�A�N���ΦAŪ
    ///part1�|Ūa[i][j] part2�|Ūb[i][j]
    int *p1,*p2,*p3;
    for(int i=0;i<n;i++){///part 3�L���
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                p1=&a[i][k];///���F�bc tutor �b�Y�q�X��
                p2=&b[k][j];
                p3=&c[i][j];
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }
}
