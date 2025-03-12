#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1: printf("Monday\n");
        break;
        case 2: printf("Tuesday\n");
        break;
        default: printf("Invalid");
    }
    return 0;
}