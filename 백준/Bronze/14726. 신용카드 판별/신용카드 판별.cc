#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        char card[20];
        scanf("%s", card);

        int sum = 0;

        for(int i = 0; i < 16; i++) {
            int digit = card[15 - i] - '0';

            if(i % 2 == 1) { 
                digit *= 2;
                if(digit >= 10)
                    digit = digit / 10 + digit % 10;
            }

            sum += digit;
        }

        if(sum % 10 == 0)
            printf("T\n");
        else
            printf("F\n");
    }

    return 0;
}