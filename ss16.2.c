#include <stdio.h>

// Ham doi gia tri cua hai bien su dung con tro
void swap(int *a, int *b) {
    int temp = *a;  // Luu gia tri cua bien a vao temp
    *a = *b;        // Gan gia tri cua b cho a
    *b = temp;      // Gan gia tri cua temp (gia tri cu cua a) cho b
}

int main() {
    int x = 5, y = 10;  // Khai bao va gan gia tri cho hai bien

    printf("Truoc khi doi: x = %d, y = %d\n", x, y);

    // Goi ham doi gia tri
    swap(&x, &y);

    printf("Sau khi doi: x = %d, y = %d\n", x, y);

    return 0;
}

