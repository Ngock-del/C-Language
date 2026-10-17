#include <stdio.h>

int main () {
    //Viet chuong trinh tinh tong
    int n;
    float S = 1.0;
    printf ("Hap mot so tu nhien n: ");
    scanf ("%d", &n);
    if (n <= 0) {
        printf ("So ban nhap khong hop le!");
    return 0;
    }
    for (int i = 1; i <= n-1; i++) {
        S = S + 1.0/(i*(i+1));
    }
    printf ("Tong cua %d so tu nhien la: %.2f", n, S);
return 0;
}