#include <stdio.h>

int a[100];
int n;
int x[100];

void NhapMang(int a[], int *n) {
    printf ("Hay nhap vao so luong phan tu: ");
    scanf ("%d", n);
    for (int i = 0; i< *n; i++) {
        printf ("Hay nhap vao gia tri a[%d]: ", i);
        scanf ("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    printf ("Mang ban vua nhap la: ");
    for (int i = 0; i<n; i++) {
        printf ("%d ", a[i]);
    }
    printf ("\n");
}

int TimKiem(int x[100], int n, int tk) {
    int kq = 0;
    for (int i = 0; i<n; i++) {
        if (x[i] == tk) {
            kq = 1;
            return 1;
        }
    }
    return kq;
}

int ThucHienTim(int x[100], int n) {
    int tk;
    printf ("Hay nhap vao gia tri can tim: ");
    scanf ("%d", &tk);
    int kq = TimKiem(x, n, tk);
    if (kq == 1) {
        printf ("Tim thay!\n");
    }
    else {
        printf ("Khong tim thay!\n");
    }
}

int main() {
    NhapMang(a, &n);
    XuatMang(a, n);
    printf ("\n");
    ThucHienTim(a, n);
    return 0;
}
