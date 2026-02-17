#include <stdio.h>
#include <string.h>

int main() {
    char arr[1001];
    scanf("%[^\n]", arr);
    
    int len = strlen(arr);

    printf("%c", arr[0]);

    for(int i = 1; i < len; i++){
        if(arr[i] != arr[i-1]) {
            printf("%c", arr[i]);
        }
    }

    return 0;
}
