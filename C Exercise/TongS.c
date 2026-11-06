#include <stdio.h>

int main() {
    int n;
    int S = 0;
    printf ("Hay nhap vao mot so nguyen n: ");
    scanf ("%d", &n);
    for (int i = 1; i <= n; i++) {
        S = S + i;
    }
    printf ("Tong S cua %d so nguyen la: %d", n, S);
    return 0;
}