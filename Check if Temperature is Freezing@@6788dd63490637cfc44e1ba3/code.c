#include<stdio.h>
int main(){
    int w;
    scanf("%d", &w);
    if(w<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
    return 0;
}