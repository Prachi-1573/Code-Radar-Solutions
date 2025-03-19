#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }    
    printf("%d",sum);
    return 0;
}