// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char arr[101];
    scanf("%s",&arr);
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i ++){
        int a,b;
        scanf("%d %d",&a,&b);
        char temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    printf("%s",arr);
    return 0;
}