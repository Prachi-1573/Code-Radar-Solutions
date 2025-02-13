#include<stdio.h>
int main(){
    int x, y,i;
    scanf("%d", x);
    for ( i = 1; i <= 10; i++){
        y = x * i;
    }
    printf("%d x %d = %d", x, i, y);
    return 0;
}