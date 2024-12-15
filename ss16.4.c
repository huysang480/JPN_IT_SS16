#include <stdio.h>

// Ham in cac phan tu trong mang su dung con tro
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i)); // Truy cap phan tu bang con tro
    }
}

int main() {
    int mang[] = {2, 4, 6, 8, 10}; // Khai bao va gan gia tri cho mang
    int kich_thuoc = sizeof(mang) / sizeof(mang[0]); // Tinh kich thuoc cua mang

    // Goi ham de in cac phan tu trong mang
    inMang(mang, kich_thuoc);

    return 0;
}

