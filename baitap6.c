#include <stdio.h>
#include <math.h>

int isPrime(int num) {

    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;

    printf("Nhap so luong so nguyen to can tim: ");
    scanf("%d", &n);

    printf("Cac so nguyen to dau tien la: ");
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}
