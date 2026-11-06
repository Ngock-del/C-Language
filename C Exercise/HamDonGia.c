#include <stdio.h>
#include <math.h>

int TinhTien(double dongia, int soluong) {
    double tongtien = 0;
    tongtien = dongia*soluong;
    if (tongtien >= 500000) {
        tongtien = tongtien*0.9;
    }
    else {
        printf ("Tong so tien cua quy khach la: %.2f", tongtien);
        return 0;
    }
    printf ("Tong so tien cua quy khach la: %.2f\n", tongtien); 
}

int main() {
    int soluong;
    double dongia, tongtien;
    printf ("Hay nhap don gia: ");
    scanf ("%lf", &dongia);
    printf ("Hay nhap so luong: ");
    scanf ("%d", &soluong);
    TinhTien(dongia, soluong);  
}