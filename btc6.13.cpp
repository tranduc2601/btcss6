#include <stdio.h>
const char* zodiacSign(int day, int month) {
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) return "Aquarius- Bao Binh";
    if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) return "Pisces- Song Ngu";
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) return "Aries- Bach Duong";
    if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) return "Taurus- Kim Nguu";
    if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) return "Gemini- Song Tu";
    if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) return "Cancer- Cu Giai";
    if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) return "Leo- Su Tu";
    if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) return "Virgo- Xu Nu";
    if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) return "Libra- Thien Binh";
    if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) return "Scorpio- Bo Cap";
    if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) return "Sagittarius- Nhan Ma";
    if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) return "Capricorn- Ma Ket";
    return " ngay thang duco nhap khong dung";
}
int main() {
    int day, month;
    printf(" nhap ngay sinh: ");
    scanf("%d", &day);
    printf(" nhap thang sinh: ");
    scanf("%d", &month);
    printf(" cung hoang dao la: %s\n", zodiacSign(day, month));
    return 0;
}

