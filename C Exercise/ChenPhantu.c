#include <stdio.h>
#define MAX 100

int a[MAX];
int n;
int m;
int b;

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

void Chencuoi(int a[], int *n, int m) {
    
    if ( *n >= MAX) {
        printf ("Khong the them phan tu!");
        return;
    }
    printf ("\n");
    printf ("Hay nhap vao gia tri muon them vao cuoi mang: ");
    scanf ("%d", &m);

    a[*n] = m;
    (*n)++;
}

void Chendau(int a[], int *n, int b) {
    
    if ( *n >= MAX) {
        printf ("Khong the them phan tu!");
        return;
    }
    printf ("\n");
    printf ("Hay nhap vao gia tri muon them vao dau mang: ");
    scanf ("%d", &b);
    
    for (int i = *n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = b;
    (*n)++;
}

void ChenvaoK(int a[], int *n, int k) {
    int vt;
    if ( *n >= MAX) {
        printf ("Khong the them phan tu!");
        return;
    }

    (*n)++;

    printf ("Hay nhap vao gia tri muon them vao mang: ");
    scanf ("%d", &k);
    printf ("Hay nhap vi tri muon them: ");
    scanf ("%d", &vt);
    for (int i = *n-1; i > vt; i--) {
        a[i] = a[i-1];
    }
    a[vt] = k;
}

int main() {
    NhapMang(a, &n);
    XuatMang(a, n);
    printf ("\n");
    Chencuoi(a, &n, m);
    XuatMang(a, n);
    printf ("\n");
    Chendau(a, &n, b);
    XuatMang(a, n);
    printf ("\n");
    ChenvaoK(a, &n, b);
    XuatMang(a, n);
    
    return 0;
}