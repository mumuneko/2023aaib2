///����:�q���ѦҸյ{���X�o(copy)
///�ƲߤW�g�Ъ�printf()��f�榡
#include <stdio.h>
int main()
{
    int a,b;
    printf("�п�J��Ӿ��:");///���L����A���ܧA��J
    scanf("%d %d",&a,&b);///scanf()�n�[&�Ÿ�
    printf("�A�{�b��J�F2�ӼƦr,�����[�k:\n");
    printf("%5d\n",a);///�L�X�ӡA5�檺��ơA�᭱\n����
    printf("%5d\n",b);///�L�X�ӡA5�檺��ơA�᭱\n����
    printf("------\n");///�L�X�@���A�᭱\n����
    printf("%5d\n",a+b);///�L�X�ӡA5�檺��ơA�᭱\n����
}
