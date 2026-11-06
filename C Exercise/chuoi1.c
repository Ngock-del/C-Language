#include <stdio.h>

int main () {
    int tuoi;
    char ten[31];
    printf ("Nhap tuoi: ");
    scanf ("%d", &tuoi);
    fflush(stdin); 
    printf ("Nhap ten: ");
    scanf ("%30s", &ten);
    fgets(ten, sizeof(ten), stdin);
    return 0;
}
