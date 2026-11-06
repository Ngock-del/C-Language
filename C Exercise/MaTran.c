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
    printf ("\n");
}

void FlatternB(int b[][100], int B[], int m, int n) {
    int k = 0;
    printf ("Ma tran hang cua mang b la: ");
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<m; j++) {
            B[k]=b[i][j];
            k++;
        }
    }
    for (k = 0; k < m*n; k++) {
        printf ("%d ", B[k]);
    }
    printf ("\n");
}

void BubbleSortA(int A[], int m, int n) {
    
    for (int i = 0; i < m*n-1; i++) {
        for (int k=0; k < m*n-1-i; k++) {
            if (A[k] > A[k+1] ) {
                int temp = A[k];
                    A[k] = A[k+1];
                    A[k+1] = temp;
            }
        }
    }
    printf ("Sap xep mang A (Nho --> Lon) la: ");
    for (int k = 0; k < m*n; k++) {
        printf ("%d ", A[k]);
    }
    printf ("\n");
}

void BienDoi(int B[], int a[][100], int m, int n) {
    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;
    int k = 0;

    while (top <= bottom && left <= right) {

        for (int i = top; i <= bottom; i++) {
            a[i][left] = B[k];
            k++;
        }
        left++;
        
        if (top <= bottom) {
            for (int j = left; j <= right; j++) {
                a[bottom][j] = B[k];
                k++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i=bottom; i >= top; i--) {
                a[i][right] = B[k];
                k++;
            }
            right--;
        }

        if (top <= bottom) {
            for (int j = right; j>=left; j--) {
                a[top][j] = B[k];
                k++;
            }
            top++;
        }
    }
    printf ("Ma tran sau khi bien doi la: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}

int main() {
    int a[100][100];
    int n;
    int m;
    int k;
    int b[100][100];
    int c[100][100];
    int A[10000], B[10000];

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

    FlatternB(b, B, m, n);
    printf ("\n");

    BubbleSortA(A, m, n);
    printf ("\n");

    BienDoi(A, a, n, m);
    return 0;
}