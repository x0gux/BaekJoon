// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int st,yt;
    scanf("%d %d",&st,&yt);
    
    int score=0;
    
    int flag = 1;
    for(int i = 0 ; i<st; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a != b ) flag = 0;
        
    }
    if(flag == 1 ) score+=2;

    int flag1 = 1;
    for(int i = 0 ; i < yt; i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a != b ) flag1 = 0;
    
    }
    if(flag1 == 1 ) score+=1;
    
    if(score == 3 ) printf("Accepted");
    else if(score == 2 && yt == 0 ) printf("Accepted");
    else if(score == 2 ) printf("Why Wrong!!!");
    else printf("Wrong Answer");
    
    return 0;
}