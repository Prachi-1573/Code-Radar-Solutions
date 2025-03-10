#include<Stdio.h>
int main(){
    int a,s;
    scanf("%d %d", &a, &s);
    if(a%3==0 && a%5==0){
        printf("Divisible by Both");
    }
    else if(a%3==0){
        printf("Divisible by 3");
    }
    else if(a%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}