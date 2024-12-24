#include <stdio.h>
int main() {
    double principal, monthlyRate, finalAmount, interest;
    int months;
    printf(" tien ban dau: ");
    scanf("%lf", &principal);
    printf(" lai suat (%%): ");
    scanf("%lf", &monthlyRate);
    monthlyRate /= 100;
    printf(" so thang gui: ");
    scanf("%d", &months);
    finalAmount = principal;
    for (int i = 0; i < months; i++) {
        finalAmount *= (1 + monthlyRate);
    }
    interest = finalAmount - principal;
    printf(" tien lai : %.3f\n", interest);
    printf(" tien se duco nhan: %.3f\n", finalAmount);
    return 0;
}

