#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, x1, x2;
    printf ("Hay nhap vao he so a: ", a);
    scanf ("%f", &a);
    printf ("Hay nhap vao he so b: ", b);
    scanf ("%f", &b);
    printf ("Hay nhap vao he so c: ", c);
    scanf ("%f", &c);
    float delta = pow(b,2) - (4*a*c);
    if (a == 0) {
        printf ("He so a phai khac 0!\n");
    return 0;
    }
    if (delta < 0) {
        printf ("Phuong trinh vo nghiem!");
    }
    else if (delta == 0) {
        float x = -b/(2*a);
        printf ("Phuong trinh co nghiem kep la x = %.2f", x);
    }
    else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf ("Phuong trinh co 2 nghiem phan biet la:\n x1 = %.2f \n x2 = %.2f", x1, x2);
    }
    return 0;
}