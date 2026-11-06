#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf ("Nhap vao chuoi ky tu cua ban: ");
    fgets(s, sizeof(s), stdin);
    int n = strlen(s);
    for (int i = 0; i<n ; i++) {
        s[i] = s[i+1];
    }
    
    printf ("Chuoi sau khi xoa: %s", s);
    return 0;
}