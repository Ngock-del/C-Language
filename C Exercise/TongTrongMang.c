#include <stdio.h>
int main () { 
    int a[100];
    int n, soluongsoduong = 0;
    int tong = 0, td = 0;
    int tich = 1;
    float trungbinhcong;
    float tbcd;
    Nhap:
    printf ("Nhap vao so luong phan tu: ");
    scanf ("%d", &n);
    if (n <= 0) {
        printf ("So ban nhap khong hop le! Vui long nhap lai.\n");
        goto Nhap;
    }

    for (int i = 1; i <= n; i++) {
        printf ("Hay nhap phan tu [%d]: ", i-1);
        scanf ("%d", &a[i]);
        tong = tong + a[i];
        tich = (tich * a[i]);
    }
    trungbinhcong = (float)tong / n;
    
    printf ("Cac phan tu ban vua nhap la: ");
    for (int i = 1; i <= n; i++) {
        printf(" %d ", a[i]);
    }
    
    printf ("Cac so duong trong mang la: ");
    for (int i = 1; i <= n; i++) {
        if (a[i] >= 0) {
            printf(" %d ", a[i]);
            td = td + a[i];
            soluongsoduong++;
        }
    }
    tbcd = (float)td/soluongsoduong;
    
    printf ("\nTong cua cac phan tu trong mang la: %d\n", tong);

    printf ("Tich cua cac phan tu trong mang la: %d\n", tich);

    printf ("Trung binh cong cua cac phan tu trong mang la: %.2f\n", trungbinhcong);

    if (tbcd > 0) {
        printf ("So luong so duong trong mang la: %d\n", soluongsoduong);
        printf ("Trung binh cong cua cac phan tu duong trong mang la: %.2f\n", tbcd);
    }
    else {
        printf ("Mang khong co so duong.\n");
    }
}