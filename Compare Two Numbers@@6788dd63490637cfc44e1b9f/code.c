#include<stdio.h>
int main(){
    int a,b;
    scanf("%a %b", &a,&b);
    if(a = b){
        printf("First");
    }
    else if(a < b){
        printf("Second");
    }
    else{
        printf("Equal");
    }
    return 0;
}