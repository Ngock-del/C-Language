#include <stdio.h>

int main() {
    int a;
    printf ("Hay nhap vao mot so tu 1 --> 7: ", a);
    scanf ("%d", &a);
    switch (a) {
        case 1: 
        printf ("Day la Chu Nhat!");
        break;
        case 2: 
        printf ("Day la Thu 2!");
        break;
        case 3: 
        printf ("Day la Thu 3!");
        break;
        case 4: 
        printf ("Day la Thu 4!");
        break;
        case 5: 
        printf ("Day la Thu 5!");
        break;
        case 6: 
        printf ("Day la Thu 6!");
        break;
        case 7: 
        printf ("Day la Thu 7!");
        break;
        default:
        printf ("So cua ban khong hop le!");
        break;
    }
    return 0;
}