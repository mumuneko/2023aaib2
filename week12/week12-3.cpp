#include <stdio.h>
int main()
{
    int n=2;
    int a[2][2]={{10,20},{11,22}};
    int b[2][2]={{2,1},{3,2}};
    int c[2][2];
    ///上週教的part1讀資料。先設好，就不用再讀
    ///part1會讀a[i][j] part2會讀b[i][j]
    int *p1,*p2,*p3;
    for(int i=0;i<n;i++){///part 3印資料
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                p1=&a[i][k];///為了在c tutor 箭頭秀出來
                p2=&b[k][j];
                p3=&c[i][j];
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }
}
