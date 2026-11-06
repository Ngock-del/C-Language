#include <stdio.h>

int main() {
    int a, b, min, max;
    printf ("Hay nhap vao so nguyen a: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao so nguyen b: ");
    scanf ("%d", &b);
    
    max = (a > b) ? a : b;
    min = (a > b) ? b : a;
    printf ("Max la: %d\n", max);
    printf ("Min la: %d", min);

    return 0;
}