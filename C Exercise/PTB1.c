#include <stdio.h>
#include <stdlib.h>
int main() {
    float a, b, x;
    printf ("Hay nhap he so a: ");
    scanf ("%f", &a);
    printf ("Hay nhap he so b: ");
    scanf ("%f", &b);
    x = -b/a;
    printf ("Phuong trinh co nghiem la: x = %.2f", x);
    
    return 0;
}