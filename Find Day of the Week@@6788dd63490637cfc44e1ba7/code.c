#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    switch(x){
        case 1: printf("Monday");
        default: printf("Invalid");
    }
    return 0;
}