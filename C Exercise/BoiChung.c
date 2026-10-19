#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    printf ("Hay nhap vao mot so tu nhien a: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao mot so tu nhien b: ");
    scanf ("%d", &b);

    printf ("Boi chung cua %d va %d la: \n", a, b);

    for (int i = 0; i <= 100; i++) {
        if (i % a == 0 && i % b == 0) {
            printf ("%d\n", i);
        }
    }
}