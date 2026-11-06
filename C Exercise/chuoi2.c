#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf ("Nhap vao chuoi ky tu cua ban: ");
    fgets(s, sizeof(s), stdin);
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != 'e') {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
    printf ("Chuoi sau khi xoa: %s", s);
    return 0;
}