#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x%x==x){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}