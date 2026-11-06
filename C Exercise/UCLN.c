#include <stdio.h>

int main() {
    int a, b, uscln;
    printf ("Hay nhap vao mot so tu nhien a: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao mot so tu nhien b: ");
    scanf ("%d", &b);
    if (a == 0) {
        printf ("USCLN la %d", b);
    }
    if (b == 0) {
        printf ("USCLN la %d", a);
    }
    if (a != 0 && b != 0) {
        while (a != b) {
            if (a > b) {
                a = a - b;
            }
            if (a < b) {
                b = b - a;
            }
        }
    printf ("%d", a);
    }
}