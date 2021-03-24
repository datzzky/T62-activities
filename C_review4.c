#include <stdio.h>
int main() {
    int num, rev = 0, r;
    printf("Enter stiring of integer: ");
    scanf("%d", &num);
    while (num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    printf("Reveresedsed value is = %d", rev);
	getch();
    return 0;
}