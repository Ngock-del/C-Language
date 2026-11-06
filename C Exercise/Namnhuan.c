#include <stdio.h>

int main() {
    int m, y;
    printf ("Hay nhap vao mot thang (tu 1 --> 12): ");
    scanf ("%d", &m);
    if (m == 2) {
        printf ("Hay nhap vao so nam: ");
        scanf ("%d", &y);
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
            printf ("\nNam ban nhap la nam nhuan.\n");
            printf ("\nThang 2 co 29 ngay.\n");
        
            return 0;
        }
        else {
            printf ("\nNam ban nhap khong phai nam nhuan.");
            printf ("\nThang 2 co 28 ngay.");
            return 0;
        }
    }    
    else {
        switch (m) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf ("Thang co 31 ngay.\n");
            break;
            case 4:
            case 6:
            case 9:
            case 11:
            printf ("Thang co 30 ngay.\n");
            break;
            default:
            printf ("Thang ban nhap khong hop le!");
            break;
        }
    }
    return 0;
}