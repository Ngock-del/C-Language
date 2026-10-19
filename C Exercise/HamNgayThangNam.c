#include <stdio.h>

int Kiemtrangaycuathang(int thang, int nam) {
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        return 31;
        
        case 4:
        case 6:
        case 9:
        case 11:
        return 30;
        
        case 2: 
        return ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))?29:28;
        default:
        return -1;
    }    
}

int NgaytrongNam(int ngay, int thang, int nam) {
    int ntn = 0;
    for (int i = 1; i < thang; i++) {
        ntn+=Kiemtrangaycuathang(i, nam);
    }
    ntn += ngay;
    return ntn;
}

int Ngayhomtruoc(int ngay, int thang, int nam) {
    if (ngay == 1) {
        if (thang == 1) {
            nam--;
            thang = 12;
            ngay = 31;
        }
        else if (thang == 3) {
            if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                ngay = 29;
                thang--;
            }
            else {
                ngay = 28;
                thang--;
            }
        }
        else {
        thang--;
        ngay = Kiemtrangaycuathang(thang, nam);
        }
    }
    else {
        ngay--;
    }
   printf ("NGAY HOM TRUOC LA %d/%d/%d\n",ngay, thang, nam);
}

int Ngayhomsau (int ngay, int thang, int nam) {
    int nct = Kiemtrangaycuathang(thang, nam);
    if (ngay == nct){
        if (thang == 12){
            nam++;
            thang = 1;
            ngay = 1;
        }
        else {
            thang++;
            ngay = 1;

        }
    }
    else {
        ngay++;
    }
    printf ("NGAY TIEP THEO LA: %d/%d/%d", ngay, thang, nam);
}

int main() {
    int ngay, thang, nam, i;
    do {
    printf ("Hay nhap vao ngay thang nam: ");
    scanf ("%d%d%d", &ngay, &thang, &nam);
    } while (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 0);
    printf ("SO NGAY CUA THANG LA: %d\n", Kiemtrangaycuathang(thang, nam));

    printf ("NGAY %d LA NGAY THU %d TRONG NAM %d.\n", ngay, NgaytrongNam(ngay, thang, nam), nam);
    
    Ngayhomtruoc(ngay, thang, nam);

    Ngayhomsau(ngay, thang, nam);
}