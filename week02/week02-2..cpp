///要認識float浮點數(floating point number)
#include <stdio.h>
int main()
{
    float pi = 3.1415926535897932384626;
    double pi2=3.1415926535897932384626;
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位:%10f\n",pi);
    printf("double10位:%10f\n",pi2);
    printf("float 10位:%20.18f\n",pi);
    printf("double10位:%20.18f\n",pi2);
}
