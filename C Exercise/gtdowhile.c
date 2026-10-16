#include <stdio.h>

int main() {
    int n, i;
    long long gt = 1;
    printf ("Hay nhap mot so tu nhien n: ");
    scanf ("%d", &n);
    i=1;
    do {
        gt = gt * i;
    } while (i++ && i <= n);
    printf ("Giai thua cua %d la %lld", n, gt);
    return 0;
}