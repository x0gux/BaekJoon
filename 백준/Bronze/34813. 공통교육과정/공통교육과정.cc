// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char s;
    char arr[8];
    scanf("%c%s",&s,arr);
    if(s == 'F') printf("Foundation");
    else if(s == 'C') printf("Claves");
    else if(s == 'V') printf("Veritas");
    else if(s == 'E') printf("Exploration");
    return 0;
}