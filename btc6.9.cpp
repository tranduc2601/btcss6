#include <stdio.h>
int main() {
    int number, n1, n2, n3, sum;
    printf(" cac so armstrong co ba chu so la: \n");
    for (number = 100; number <= 999; number++) {
        n1 = number / 100;   //370/100=3     
        n2 = (number / 10) % 10;    //70..7.000 
        n3 = number % 10;          //0..0 
        sum = n1*n1*n1 + n2*n2*n2 + n3*n3*n3;
        if (sum == number) {
            printf("%d\n", number);
        }
    }
    return 0;
}
//153 370 371 407 
