#include <stdio.h>

// Ham sap xep mang theo thuat toan bubble sort
void sapXepMang(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Hoan doi gia tri cua arr[j] va arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Ham in mang
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {5, 2, 9, 1, 5, 6}; // Khai bao va gan gia tri cho mang
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); // Tinh kich thuoc cua mang

    printf("Mang truoc khi sap xep:\n");
    inMang(mang, kichThuoc);

    // Goi ham sap xep
    sapXepMang(mang, kichThuoc);

    printf("Mang sau khi sap xep:\n");
    inMang(mang, kichThuoc);

    return 0;
}

