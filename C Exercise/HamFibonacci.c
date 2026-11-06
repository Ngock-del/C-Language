#include <stdio.h>

int Fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        int r;
        return Fibonacci(n-1)+Fibonacci(n-2);
        
    }
}

int main() {
    int n;
    Nhap:
    printf ("Hay nhap vao mot so tu nhien n (n >= 0): ");
    scanf ("%d", &n);
    if (n < 0) {
    printf ("So ban vua nhap khong hop le! Vui long nhap lai.\n");
    goto Nhap;
    }
    printf ("Gia tri Fibonacci cua %d la %d\n", n, Fibonacci(n));
}