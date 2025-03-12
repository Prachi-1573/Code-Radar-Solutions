#include<stdio.h>
int main(){
    int z,x;
    scanf("%d %d", &z,&x);
    if(z<0 && x<0 ){
        printf("Same Sign");
    }
    else if(z>0 && x>0){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}