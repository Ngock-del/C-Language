#include <stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int tangdan(int x[], int n) {
    printf ("Gia tri tang dan: ");
    for (int i = 0; i < n-1; i++) {
        int vitrinhonhat = i;
        for (int j = i+1; j < n; j++) {
            if (x[j] < x[vitrinhonhat]) {
                vitrinhonhat = j;
            }
        }
        swap(&x[i], &x[vitrinhonhat]);
    }
}

int giamdan(int x[], int n) {
    printf ("Gia tri giam dan: ");
    for (int i = 0; i < n-1; i++) {
        int vitrilonnhat = i;
        for (int j = i+1; j < n; j++) {
            if (x[j] > x[vitrilonnhat]) {
                vitrilonnhat = j;
            }
        }
        swap(&x[i], &x[vitrilonnhat]);
    }
}

void printMang(int x[], int n) {
    for (int i = 0; i < n; i++) {
            printf (" %d ", x[i]);
    }
}

int main() {
    int n;
    int a[100];

    printf ("Hay nhap vao so luong phan tu: ");
    scanf ("%d", &n);

    for (int i = 0; i < n; i++) {
        printf ("Hay nhap vao phan tu [%d]: ", i);
        scanf ("%d", &a[i]);
    }
    giamdan(a ,n);
    printMang(a, n);
    printf ("\n");

    tangdan(a ,n);
    printMang(a, n);
}
