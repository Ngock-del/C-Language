#include <stdio.h>

int main() {
    int n, i;
    printf ("Hay nhap vao mot so tu nhien n: ");
    scanf ("%d", &n);
    printf ("Day so le: \n");
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf ("%d\n", i);
        }
        continue;
    }
}