#include <stdio.h>

// Ham tim kiem phan tu trong mang
int timKiemPhanTu(int *arr, int size, int giaTriTimKiem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTriTimKiem) {
            return i; // Tra ve vi tri phan tu neu tim thay
        }
    }
    return -1; // Tra ve -1 neu khong tim thay
}

int main() {
    int mang[] = {1, 2, 4, 5, 6, 7}; // Khai bao va gan gia tri cho mang
    int kichThuoc = sizeof(mang) / sizeof(mang[0]); // Tinh kich thuoc cua mang
    int giaTriTimKiem = 7; // Gia tri can tim

    // Goi ham tim kiem
    int viTri = timKiemPhanTu(mang, kichThuoc, giaTriTimKiem);

    // In ket qua
    if (viTri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", giaTriTimKiem, viTri);
    } else {
        printf("Phan tu %d khong co trong mang\n", giaTriTimKiem);
    }

    return 0;
}

