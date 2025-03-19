#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n],digit;
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
        digit = n%10;
    }
    
    for(int i=0;i<n;i++){
        sum+=digit;
    }    
    printf("%d",sum);
    return 0;
}