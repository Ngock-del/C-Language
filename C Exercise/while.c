#include <stdio.h>

int main() {
    int n, tong;
    printf ("Hay nhap mot so tu nhien n: ");
    scanf("%d", &n);
    int i = 0;
    tong = 0;
    while (i <= n) {
        tong = tong + i;
        i++;
    }
    printf ("Tong tu 1 den %d la: %d", n, tong);
    return 0;
}