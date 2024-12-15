#include <stdio.h>

// Ham cap nhat phan tu trong mang
void capNhatPhanTu(int *arr, int size, int viTri, int giaTriMoi) {
    if (viTri >= 0 && viTri < size) {
        arr[viTri] = giaTriMoi; // Cap nhat gia tri moi tai vi tri can sua
    } else {
        printf("Vi tri %d khong hop le!\n", viTri);
    }
}

// Ham in cac phan tu cua mang
void inMang(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[] = {1, 2, 3, 4, 5}; // Khai bao va gan gia tri cho mang
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); // Tinh kich thuoc cua mang

    printf("Mang truoc khi cap nhat:\n");
    inMang(mang, kichThuoc);

    // Goi ham cap nhat phan tu
    capNhatPhanTu(mang, kichThuoc, 2, 10); // Cap nhat gia tri moi la 10 tai vi tri 2

    printf("Mang sau khi cap nhat:\n");
    inMang(mang, kichThuoc);

    return 0;
}

