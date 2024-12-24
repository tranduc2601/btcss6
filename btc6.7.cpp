#include <stdio.h>
int main() {
    int num;
    printf(" nhap mot so nguyen ");
    scanf("%d", &num);
    printf(" cac uoc cua %d la ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

