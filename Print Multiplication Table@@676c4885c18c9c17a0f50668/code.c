#include<stdio.h>
int main(){
    int x, y;
    scanf("%d", x);
    for ( int i = 1; i <= 10; i++){
        y = x * i;
        printf("%d x %d = %d", x, i, y);
    }
    
    return 0;
}