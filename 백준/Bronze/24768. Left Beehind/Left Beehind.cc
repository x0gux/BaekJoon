// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(a==0 && b==0) return 0 ;
        if(a+b == 13){
            printf("Never speak again.\n");
        }
        else if(a>b){
            printf("To the convention.\n");
        }
        else if(b>a){
            printf("Left beehind.\n");
        }
        else if(a == b ){
            printf("Undecided.\n");
        }
    }

    return 0;
}