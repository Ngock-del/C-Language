#include <stdio.h>

int  main() {
    int n;
    printf ("Hay nhap vao mot so n: ");
    scanf ("%d", &n);
    if (n > 15) {
        printf ("%d lon hon 15", n);
    }    
    else if (n == 15) {
        printf ("%d bang 15", n);
    }
    else {
        printf ("%d nho hon 15", n);
    }
    return 0;
}