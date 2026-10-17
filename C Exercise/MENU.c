#include <stdio.h>

int main() {
    int n, i, j, k, tong;
        printf ("KINH CHAO QUY KHACH!\n");
        i = 0;
        j = 0;
        k = 0;
        Lua:
        printf ("---MENU QUAN NUOC---\n");
        printf ("1. Matcha Latte: 30.000 VND\n");
        printf ("2. Tra dao: 25.000 VND\n");
        printf ("3. Sua chua xoai: 30.000 VND\n");
        printf ("XIN MOI QUY KHACH CHON MON.\n");
        printf ("(Chon 0 de thoat)\n");
        printf ("----------\n");
        printf ("Lua chon: ");
        scanf ("%d", &n);
        if (n > 3) {
            printf ("LUA CHON CUA QUY KHACH KHONG HOP LE!\n");
        goto Lua;
        }
        if (n == 1) {
            printf ("QUY KHACH DA CHON MON MATCHA LATTE (30.000 VND)\n");
            i = i + 30000;
        }
        else if (n == 2){
         printf ("QUY KHACH DA CHON MON TRA DAO (25.000 VND)\n");
            j = j + 25000;
        }
        else if (n == 3) {
            printf ("QUY KHACH DA CHON MON SUA CHUA XOAI (30.000 VND)\n");
            k = k + 30000;
        }
        else {
            tong = i + j + k;
            printf ("TONG SO TIEN CUA QUY KHACH LA: %d\n", tong);
            printf ("---XIN CAM ON QUY KHACH---");
            return 0;
        }
        if (n > 0 && n < 4) goto Lua;
}