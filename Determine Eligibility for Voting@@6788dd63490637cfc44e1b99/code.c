#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if (x <= 18){
        pritnf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}