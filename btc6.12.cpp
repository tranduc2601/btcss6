#include <stdio.h>
// F0 = 0, F1 = 1
//Fn = Fn - 1 + Fn - 2 voi n > 1
int main() {
    int n, f0 = 0, f1 = 1, next;
    printf(" nhap so nguyen n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf(" so duoc nhap phai la so nguyen duong \n");
        return 0;
    }
    printf(" day fibonacci voi %d so dau tien: \n", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            next = f0;					//.....0  
        } else if (i == 2) {
            next = f1;					//.......1 
        } else {
            next = f0 + f1;				//....1+0 
            f0 = f1;					//0->1 
            f1 = next;					//1+1--->>>2+(2-1)--->next+(next-1) 
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}

