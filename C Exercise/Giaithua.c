#include <stdio.h>

int main() {
    int n, i;
    long long gt = 1;
    printf ("Hay nhap mot so tu nhien n: ");
    scanf ("%d", &n);
    for ( i = 1; i <= n; i++) {
        gt = gt * i;
    }
    printf ("Giai thua cua %d la: %lld", n, gt);
    return 0;
}