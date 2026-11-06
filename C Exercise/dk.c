#include <stdio.h>

int main (void) {
    int x;

    printf ("Hay nhap vao mot so: ");
    scanf ("%d", &x);
    
    printf ("So %d cua ban la so %s\n", 
        x, (x % 2 == 0) ? "CHAN" : "LE");
    return 0;
}