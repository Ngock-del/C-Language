#include <stdio.h>
#include <limits.h>

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
    printf ("Mang ban vua nhap la: ");
    for (int i=0; i<n; i++) {
        printf ("%d ", a[i]);
    }
}

int TimMinthu2(int a[], int n) {
    int min = INT_MAX;
    int min_2 = INT_MAX;

    for (int i=0; i<n; i++) {
        if (a[i] < min) 
            min = a[i];
    }

    for (int i=0; i<n; i++) {
        if (a[i] == min) {
            continue;
        }
        else {
            if (a[i] < min_2) {
                min_2 = a[i];
            }
        }
    }
    return min_2;
}

int TimMaxthu2(int a[], int n) {
    int max = INT_MIN;
    int max_2 = INT_MIN;

    for (int i=0; i<n; i++) {
        if (a[i] > max) 
            max = a[i];
    }

    for (int i=0; i<n; i++) {
        if (a[i] == max) {
            continue;
        }
        else {
            if (a[i] > max_2) {
                max_2 = a[i];
            }
        }
    }
    return max_2;
}

int main() {
    NhapMang(a, &n);
    XuatMang(a, n);
    printf ("\n");
    printf ("Min thu 2 cua mang la %d", TimMinthu2(a, n));
    printf ("\n");
    printf ("Max thu 2 cua mang la %d", TimMaxthu2(a, n));
    return 0;
}