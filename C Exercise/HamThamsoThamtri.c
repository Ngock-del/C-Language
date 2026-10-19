#include <stdio.h>

void swap_thamtri(int a, int b) {
    int tam = a;
    a = b;
    b = tam;
}

void swap_thamchieu(int *a, int *b) {
    int tam = *a;
    *a = *b;
    *b = tam;
}

int main() {
    int a, b;
    printf ("Hay nhap vao mot so a: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao mot so b: ");
    scanf ("%d", &b);
    printf ("\nGia tri ban dau cua a = %d, b = %d", a, b);
    swap_thamtri(a, b);
    printf ("\nGia tri tham tri cua a = %d, b = %d", a, b);
    swap_thamchieu(&a, &b);
    printf ("\nGia tri tham chieu cua a = %d, b = %d", a, b);
}