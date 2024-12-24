#include <stdio.h>
#include <string.h>
int main() {
    char password[20] = "khongcopass";
    char input[20];
    printf(" nhap password ");
    scanf("%19s", input);
    if (strcmp(password, input) == 0) {
        printf(" mat khau dung\n");
    } else {
        printf(" sai mat khau\n");
    }
    return 0;
}

