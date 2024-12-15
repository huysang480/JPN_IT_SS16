#include <stdio.h>

int main() {
    int x = 10;         // Khai bao mot bien
    int *ptr = &x;      // Khai bao con tro tro den dia chi cua bien x

    // Cach 1: Su dung bien truc tiep
    printf("Gia tri cua x: %d\n", x);
    printf("Dia chi cua x: %p\n", (void*)&x);

    // Cach 2: Su dung con tro
    printf("Gia tri cua x (qua con tro): %d\n", *ptr);
    printf("Dia chi cua x (qua con tro): %p\n", (void*)ptr);

    return 0;
}

