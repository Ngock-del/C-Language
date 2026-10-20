#include <stdio.h>

void Nhiphan(int n) {
    if (n == 0){
        return;
    }
    else {
        int r = n % 2;
        Nhiphan(n/2);
        printf ("%d", r);
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
    Nhiphan(n);
}