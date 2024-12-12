#include <stdio.h>

int main() {
    int Sogiolam;
    float luongGio, luongCoBan, phuCap, tongLuong;

    printf("Nhap so gio lam trong thang: ");
    scanf("%d", &Sogiolam);

    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luongGio);

    luongCoBan = Sogiolam * luongGio;

    if (Sogiolam > 160) {
        phuCap = luongCoBan * 0.1; 
        tongLuong = luongCoBan + phuCap;
    } else {
        phuCap = 0;
        tongLuong = luongCoBan;
    }

    printf("Luong co ban: %.2f VND\n", luongCoBan);
    printf("Phu cap: %.2f VND\n", phuCap);
    printf("Tong luong: %.2f VND\n", tongLuong);

    return 0;
}
