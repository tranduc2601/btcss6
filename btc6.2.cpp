#include <stdio.h>
int main() {
    int numbers[5];
    int evenCount = 0, oddCount = 0;
    printf(" nhap vao 5 so nguyen\n");
    for (int i = 0; i < 5; i++) {
        printf(" so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf(" so chan co trongm ang la  %d\n", evenCount);
    printf(" so le co trong mang la %d\n", oddCount);
    return 0;
}

