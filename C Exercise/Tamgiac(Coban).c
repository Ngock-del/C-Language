#include <stdio.h>
#include <math.h>

int main() {
    float xa, ya;
    float xb, yb;
    float xc, yc;
    
    printf ("Hay nhap vao toa do diem A(x,y): ");
    scanf ("%f%f", &xa, &ya);
    printf ("Hay nhap vao toa do diem B(x,y): ");
    scanf ("%f%f", &xb, &yb);
    printf ("Hay nhap vao toa do diem C(x,y): ");
    scanf ("%f%f", &xc, &yc);
    float xAB = xb - xa;
    float yAB = yb - ya;
    float xAC = xc - xa;
    float yAC = yc - ya;
    float xBC = xc - xb;
    float yBC = yc - yb;
    printf ("Vecto AB co toa do la: (%.2f,%.2f)\n", xAB, yAB);
    printf ("Vecto AC co toa do la: (%.2f,%.2f)\n", xAC, yAC);
    printf ("Vecto BC co toa do la: (%.2f,%.2f)\n", xBC, yBC);

    if (xAB * xAC + yAB * yAC != 0) {
        printf ("Ba diem A, B, C tao thanh 1 tam giac.\n");
    }
    else {
        printf ("Ba diem A, B, C khong tao thanh tam giac.\n");
    }

    float AB = sqrt(pow(xAB,2)+pow(yAB,2));
    printf ("Canh AB co chieu dai la: %.2f\n", AB);
    float AC = sqrt(pow(xAC,2)+pow(yAC,2));
    printf ("Canh AC co chieu dai la: %.2f\n", AC);
    float BC = sqrt(pow(xBC,2)+pow(yBC,2));
    printf ("Canh BC co chieu dai la: %.2f\n", BC);
    
    if (AB == AC || AB == BC || AC == BC) {
        printf ("Tam Giac ABC la tam giac deu!");
    }
    float C, S, p;
    C = AB + AC + BC;
    p = C/2;
    S = (sqrt(p*(p-AB)*(p-AC)*(p-BC)));
    printf ("Chu vi cua tam giac ABC la: %.2f\n", C);
    printf ("Dien tich cua tam giac ABC la: %.2f", S);
    return 0;
}