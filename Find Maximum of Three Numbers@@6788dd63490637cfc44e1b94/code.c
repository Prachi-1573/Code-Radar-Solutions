#include <stdio.h>

int main() {
    int x,c,v;
    scanf("%d %d %d", &x, &c, &v);
    if (x > c && x > v){
        printf("%d", x);
    }
    else if(c > v && c > x){
        printf("%d", c);
    }
    else if (v > x && v > c){
        printf("%d", v);
    }
    else {
        printf("%d", x);
    }


    return 0;
}