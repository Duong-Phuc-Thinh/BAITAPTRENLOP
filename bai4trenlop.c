#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int isPrime = 1; // gia su ban dau la so nguyen to

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    // kiem tra dieu kien so nguyen tu 
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // In ket qua
    if (isPrime) {
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }
	
    return 0;
}
