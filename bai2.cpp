#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int laSoChinhPhuong(int num) {
    int canBacHai = (int)sqrt(num);
    return canBacHai * canBacHai == num;
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void demVaInSoChinhPhuong(int n) {
    int dem = 0;
    printf("Cac so chinh phuong nho hon %d la: ", n);
    for (int i = 1; i < n; i++) {
        if (laSoChinhPhuong(i)) {
            printf("%d, ", i);
            dem++;
        }
    }
    printf("\nTong so cac so chinh phuong la: %d\n", dem);
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    demVaInSoChinhPhuong(n);
    return 0;
}
