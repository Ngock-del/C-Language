#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    long k;
    printf ("Hay nhap vao mot so tu nhien a: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao mot so tu nhien b: ");
    scanf ("%d", &b);
    for (long i = 0; i <= pow(10,10); i++) {
        
        if (i % a == 0 && i % b == 0) {
           if (i > 0 && i < i + 1) {
                printf ("Boi chung nho nhat cua %d va %d la: %ld\n", a, b, i);
                return 0;
            }
        }
    }
}