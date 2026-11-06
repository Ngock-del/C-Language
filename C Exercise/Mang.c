#include <stdio.h>
#define MAX 100

void sapxeptangdan(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++){
            if (a[i] > a[j]){
                int temp =a[i];
                a[i] = a[j];
                a[j] = temp;
                printf ("%d\n", temp);
            }
        }
    }
}

int main()
{
    //Khai bao mang 1 chieu
    int a[MAX];
    int n, i;

    printf("Nhap so phan tu cua mang (1 - %d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }

    //Nhap cac phan tu cua mang
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    //Xuat mang ra man hinh
    printf("\nMang vua nhap: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    //Tim phan tu lon nhat
    int max = a[0];              
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    printf("Phan tu lon nhat: %d\n", max);

    //Tinh tong cac phan tu chan
    int tongChan = 0;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            tongChan = tongChan + a[i];
    }
    printf("Tong cac phan tu chan: %d\n", tongChan);

    printf ("Thu tu tang dan cua mang la: \n");
    sapxeptangdan(a,n);

    return 0;
}