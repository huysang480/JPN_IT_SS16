#include <stdio.h>

// Ham tinh tong hai so nguyen va luu ket qua vao bien ket_qua
void tinhTong(int a, int b, int *ket_qua) {
    *ket_qua = a + b;  // Luu tong cua a va b vao dia chi con tro ket_qua
}

int main() {
    int x = 7, y = 3;        // Khai bao va gan gia tri cho hai bien
    int ket_qua = 0;         // Khai bao bien ket_qua

    // Goi ham tinh tong
    tinhTong(x, y, &ket_qua);

    // In ket qua
    printf("Tong cua %d va %d la: %d\n", x, y, ket_qua);

    return 0;
}

