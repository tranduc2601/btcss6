#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n, count = 0, current = 2;
    printf(" nhap so cac so nguyen to can in: ");
    scanf("%d", &n);
    printf("%d so nguyen to dau tien \n", n);
    while (count < n) {
        if (isPrime(current)) {
            printf("%d ", current);
            count++;
        }
        current++;
    }
    printf("\n");
    return 0;
}

