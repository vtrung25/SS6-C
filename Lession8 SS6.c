#include <stdio.h>
#include <math.h>

int main() {
    double P, r, A;
    int n;
    printf("Nhap so tien gui ban dau: ");
    scanf("%lf", &P);

    printf("Nhap lai suat thang (phantram): ");
    scanf("%lf", &r);

    printf("Nhap so thang gui: ");
    scanf("%d", &n);
   A = P * pow(1 + r / 100, n);
    printf("Tong so tien nhan duoc sau %d thang: %.2f\n", n, A);
    printf("So tien lai la: %.2f\n", A - P);

    return 0;
}