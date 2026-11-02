#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NhapMatran1(int n, int a[][100], int m) {
     printf ("---Ma tran A---\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("Nhap vao gia tri phan tu a[%d][%d]: ", i, j);
            scanf ("%d", &a[i][j]);
        }
    }
}

void XuatMatran1(int a[][100], int n, int m) {
    printf ("Ma tran ban vua nhap la: \n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d ", a[i][j] );
        }
        printf ("\n");
    }
}

void NhapMatran2(int n, int b[][100], int m) {
    printf ("---Ma tran B---\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("Nhap vao gia tri phan tu a[%d][%d]: ", i, j);
            scanf ("%d", &b[i][j]);
        }
    }
}

void XuatMatran2(int b[][100], int n, int m) {
    printf ("Ma tran ban vua nhap la: \n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d ", b[i][j] );
        }
        printf ("\n");
    }
}

void CongMatran(int a[][100], int b[][100], int c[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
                c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf ("Tong cua 2 ma tran la: \n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
}

void TruMatran(int a[][100], int b[][100], int c[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
                c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf ("Hieu cua a - b la: \n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
}

void NhanMatran(int a[][100], int b[][100], int c[][100], int n, int m) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
                c[i][j] = a[i][j]*b[i][j];
        }
    }
    printf ("Tich cua 2 ma tran la: \n");

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf ("%d ", c[i][j]);
        }
        printf ("\n");
    }
}

void FlatternA(int a[][100], int A[], int m, int n) {
    int k = 0;
    printf ("Ma tran hang cua mang a la: ");
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            A[k]=a[i][j];
            k++;
        }
    }
    for (k = 0; k < m*n; k++) {
        printf ("%d ", A[k]);
    }
}

void FlatternB(int b[][100], int B[], int m, int n) {
    int k = 0;
    printf ("Ma tran hang cua mang a la: ");
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            B[k]=b[i][j];
            k++;
        }
    }
    for (k = 0; k < m*n; k++) {
        printf ("%d ", B[k]);
    }
}

int main() {
    int a[100][100];
    int n;
    int m;
    int k;
    int b[100][100];
    int c[100][100];
    int A[100], B[100];

    printf ("Hay nhap vao so hang: ");
    scanf ("%d", &n);

    printf ("Hay nhap vao so cot: ");
    scanf ("%d", &m);
    
    NhapMatran1(n, a, m);
    XuatMatran1(a, n, m);
    printf ("\n");
    NhapMatran2(n, b, m);
    XuatMatran2(b, n, m);
    printf ("\n");
    CongMatran(a, b, c, n, m);
    printf ("\n");
    TruMatran(a, b, c, n, m);
    printf ("\n");
    NhanMatran(a, b, c, n, m);
    printf ("\n");
    FlatternA(a, A, m, n);
    printf ("\n");
    FlatternA(b, B, m, n);
    return 0;
}