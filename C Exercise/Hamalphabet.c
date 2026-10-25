#include <stdio.h>

char chucai(char chuin) {
    if (chuin >= 65 && chuin <= 90) {
        chuin = chuin + 32;
    }
    else {
        chuin = chuin - 32;
    }
}

int main() {
    char chuin;
    printf ("Hay nhap vao mot ky tu: ");
    scanf ("%c", &chuin);

    printf (" %c ",chucai(chuin));
}