#include <stdio.h>
double customSqrt(double num) {
    double guess = num / 2.0;
    double epsilon = 1e-6;
    while ((guess * guess - num > epsilon) || (num - guess * guess > epsilon)) {
        guess = (guess + num / guess) / 2.0;
    }
    return guess;
}
int main() {
    double a, b, c;
    double delta, x1, x2;
    printf(" nhap cac so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf(" phuong trinh vn\n");
            } else {
                printf(" ptr vn.\n");
            }
        } else {
            printf(" ptr co 1ng: x = %.2lf\n", -c / b);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf(" phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf(" phg trinh co nghiem kep: x1 = x2 = %.2lf\n", x1);
        } else {
            x1 = (-b + customSqrt(delta)) / (2 * a);
            x2 = (-b - customSqrt(delta)) / (2 * a);
            printf(" ptr co 2ng phan biet x1 = %.2lf, x2 = %.2lf\n", x1, x2);
        }
    }
    return 0;
}

