#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    if(x < 2){
        printf("Not Prime");
    }
    else{
        for(int i = 2; i*i < x;i++){
            if(x%i==0){
                printf("Not Prime");
            }
            else{
                printf("Prime");
            }
        }
    }
    return 0;
}