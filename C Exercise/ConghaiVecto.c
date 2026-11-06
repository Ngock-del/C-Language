#include <stdio.h>

float a[100];
float b[100];
float c[100];
int n;

void Congvecto(float a[100], float b[100], float c[100], int *n) {
    printf ("Hay nhap vao so luong chieu cua vecto: ");
    scanf ("%d", n);
    printf ("Hay nhap vao gia tri cua vecto 1: \n");

    for (int i=0; i<*n; i++) {
        printf ("Nhap vao gia tri cua chieu [%d]: ", i+1);
        scanf ("%f", &a[i]);
    }

    printf ("\n");

    printf ("Hay nhap vao gia tri cua vecto 2: \n");
    for (int i=0; i<*n; i++) {
        printf ("Nhap vao gia tri cua chieu [%d]: ", i+1);
        scanf ("%f", &b[i]);
    }
    
    printf ("\n");
    
    printf ("Tong cua 2 vecto la: \n");
    for (int i=0; i<*n; i++) {
        c[i] = a[i] + b[i];
        printf ("Gia tri cua chieu [%d]: %.2f\n", i+1, c[i]);
    }    
}
float TichvoHuong(float a[100], float b[100], int n) {
    float tich = 0;
    for (int i = 0; i<n; i++) {
        tich = tich + ((float)a[i]*(float)b[i]);
    }
    printf ("Tich vo huong cua 2 vecto la: %.2f", tich);
}

int main() {
    Congvecto(a, b, c, &n);
    TichvoHuong(a, b, n);
}