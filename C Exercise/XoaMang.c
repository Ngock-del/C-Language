#include <stdio.h>

int a[100];
int n;

void NhapMang(int a[], int *n) {
    printf ("Hay nhap vao so luong phan tu: ");
    scanf ("%d", n);
    for (int i=0; i<*n; i++) {
        printf ("Hay nhap vao gia tri cua a[%d]: ", i);
        scanf ("%d", &a[i]);
    }
}

void XuatMang(int a[], int n) {
    printf ("Mang cua ban la: ");
    for (int i=0; i<n; i++) {
        printf ("%d ", a[i]);
    }
}

void XoaMangTheoViTri(int a[], int *n, int vt) {
    for (int i=vt; i<*n-1; i++) {
        a[i]=a[i+1];
    }
    (*n)--;
}

void XoaMangTheoGiaTri(int a[], int *n) {
    int gt;
    printf ("Hay nhap vao vi tri ban muon xoa: ");
    scanf ("%d", &gt);
    for (int i=0; i<*n; i++) {
        if (a[i] == gt) {
            XoaMangTheoViTri(a, n, i);
            i--;
        }
    }
}


int main() {
    NhapMang(a, &n);
    XuatMang(a, n);
    printf ("\n");
    XoaMangTheoGiaTri(a, &n);
    XuatMang(a, n);

}