#include <stdio.h>

int main() {
    char n;
    do {
        printf ("\nMENU");
        printf ("Nhap so 0 de thoat.\n");
        printf ("Nhap bat ky ky tu nao de tiep tuc: \n");
        scanf ("%c", &n);
    }while (n!='0');
    return 0;
}