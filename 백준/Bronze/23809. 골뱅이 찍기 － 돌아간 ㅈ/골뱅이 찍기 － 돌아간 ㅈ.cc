// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num ; 
    scanf("%d",&num);
    for(int j=0; j<num; j++){
        for(int i = 0; i < num*5 ; i++){
            if(i<num) printf("@");
            else if(i>=num*4) printf("@");
            else printf(" ");
        }
    printf("\n");
    }
    for(int j=0; j<num; j++){
        for(int i = 0; i < num*4; i++){
            if(i<num) printf("@");
            else if(i>=num*3) printf("@");
            else printf(" ");
        }
    printf("\n");
    }
    for(int i = 0 ; i < num; i++ ){
        for(int j = 0 ; j < num*3; j++){
            printf("@");
        }
        printf("\n");
    }
    for(int j=0; j<num; j++){
        for(int i = 0; i < num*4; i++){
            if(i<num) printf("@");
            else if(i>=num*3) printf("@");
            else printf(" ");
        }
    printf("\n");
    }
        for(int j=0; j<num; j++){
        for(int i = 0; i < num*5 ; i++){
            if(i<num) printf("@");
            else if(i>=num*4) printf("@");
            else printf(" ");
        }
    printf("\n");
    }
    return 0;
}