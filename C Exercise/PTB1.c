#include <stdio.h>
#include <stdlib.h>
int main() {
    float a, b, x;
    printf ("Hay nhap vao he so a: ", a);
    scanf ("%f", &a);
    printf ("Hay nhap vao he so b: ", b);
    scanf ("%f", &b);
    x = -b/a;
    if (a == 0) {
        if (b == 0) {
            printf ("Phuong trinh co vo so nghiem!");
        }
        else {
            printf ("Phuong trinh vo nghiem!");
        }
    } 
    else if (b == 0) {
        printf ("Phuong trinh co nghiem x = 0");
    }
    else {
        printf ("Phuong trinh co nghiem la x = %.2f", x);
    }
    return 0;
}