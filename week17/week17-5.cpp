//week17-5.cpp
#include <stdio.h>
int main() {
    int a[6];
    for(int i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }
    int min=a[0], max =a[0];
    for(int i = 0; i < 6; i++){
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    printf("%d", max - min);
}