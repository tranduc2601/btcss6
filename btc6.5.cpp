#include <stdio.h>
int main() {
    int year, month, days;
    printf(" nhap nam: ");
    scanf("%d", &year);
    printf(" nhap thang: ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf(" khong co thang da nhap\n");
    } else {
        if (month == 2) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            days = 30;
        } else {
            days = 31;
        }
        printf(" thang %d nam %d co %d ngay\n", month, year, days);
    }
    return 0;
}

