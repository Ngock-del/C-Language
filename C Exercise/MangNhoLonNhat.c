#include <stdio.h>

int timMin(int x[], int n) {
    int min = x[0];
    for (int i = 1; i < n; i++) {
        if (min > x[i]){
            min = x[i];
        }
    }   
    return min;
}

int timMax(int x[], int n) {
    int max = x[0];
    for (int i = 1; i < n; i++) {
        if (max < x[i]) {
            max = x[i];
        }
    }
    return max;
}

int main () {
    int n, temp;
    int a[100];
    printf ("Hay nhap vao so phan tu : ");
    scanf ("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Hay nhap vao phan tu [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf ("Gia tri nho nhat cua mang la %d\n", timMin(a, n));

    printf ("Gia tri lon nhat cua mang la %d\n", timMax(a, n));
}