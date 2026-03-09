// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    int sum=1;
            
    for(int i=0 ; i <t; i ++){
        int k;
        scanf("%d",&k);

        
        for(int j = 1 ; j <=k; j++){
            sum = sum * j;
        }
        printf("%d\n",sum%10);
        sum = 1;
    }

    return 0;
}