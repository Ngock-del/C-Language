#include <stdio.h>
#include <math.h>

int main() {
    int a[100];
    int n, phantuchan = 0, phantule = 0;
    Nhap:
    printf ("Hay nhap vao so luong phan tu (0 < n < 100): ");
    scanf ("%d", &n);
    if (n < 1 || n > 100){
        printf ("So ban nhap khong hop le! Vui long nhap lai.\n");
         goto Nhap;
    }

    for (int i = 1; i <= n; i++) {
        printf ("Hay nhap vao phan tu [%d]: ", i-1);
        scanf ("%d", &a[i]);
    }

    printf ("Phan tu ban vua nhap la: ");
    for (int i = 1; i <= n; i++) {
        printf (" %d ", a[i]);
    }

    printf ("\nCac phan tu chan cua mang la: ");
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
        printf (" %d ", a[i]);
        }
    }

    printf ("\nCac phan tu chia het cho 3 la: ");
    for (int i = 1; i <= n; i++) {
        if (a[i] % 3 == 0) {
        printf (" %d ", a[i]);
        }
    }

    printf ("\nCac so nguyen to la: ");
    for (int i = 1; i <= n; i++) {
        if (a[i] <= 1) {
            continue;
        }
        
        int lasonguyento = 1;
        for (int j = 2; j < a[i]; j++) {
            if (a[i] % j == 0) {
                lasonguyento = 0;
                break;
            }
        }
        if (lasonguyento == 1) {
            printf (" %d ", a[i]);
        }
    }
}