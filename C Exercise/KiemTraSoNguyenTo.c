#include <stdio.h>
int KiemTraNguyenTo(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    printf ("Hay nhap vao mot so de kiem tra: ");
    scanf ("%d", &n);
if (KiemTraNguyenTo(n) == 1) {
    printf ("%d la mot so nguyen to.\n");
}
else {
    printf ("%d khong phai so nguyen to.\n");
}

return 0;
}