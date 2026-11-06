#include <stdio.h>
#define Gia 30000

int main() {
    int n, m;
    int i = 1; 
    int tien = 300000;
    int soluong = 0;
    int tongtien = 0;
    printf ("BAN CO SO TIEN LA 300000 VND.\n");
    printf ("\n");
    printf ("Hay nhap so thanh vien: ");
    scanf ("%d", &n);
    
    do {
        printf ("Hay nhap so luong cua nguoi so %d: ", i);
        scanf ("%d", &m);
        printf ("\nDa mua %d ly!\n", m);
        tien = tien - (Gia*m);
        printf ("\nSo tien con lai la: %d\n", tien);
        soluong = soluong + m;
        tongtien = tongtien + (Gia*m);
        printf ("(NHAP 0 DE TINH TIEN)\n");
            
        if (tien <= 0) {
            printf ("SO TIEN CON LAI CUA BAN KHONG DU! VUI LONG NHAP LAI.\n");
            return 0;
        }

        if (m == 0) {
            printf ("Tong so ly: %d\n", soluong);
            printf ("Tong hoa don la: %d\n", tongtien);
            return 0;
        }
            
    } while (i++ && i <= n);
    
    printf ("---------------\n");
    printf ("TONG SO LY: %d\n", soluong);
    printf ("TONG HOA DON LA: %d\n", tongtien);

    if (tongtien >= 180000) {
        printf ("---------------\n");
        printf ("BAN NHAN DUOC KHUYEN MAI GIAM 10%% KHI MUA TU 6 LY TRO LEN!\n");
        tongtien = tongtien*0.9;
        printf ("TONG HOA DON CUA BAN LA (DA GIAM GIA): %d", tongtien);
    }
}