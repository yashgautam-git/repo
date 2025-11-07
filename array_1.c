#include <stdio.h>
void input(int arr[],int n);
int arraySum(int arr[],int n);
int main() {
    int n ;
    printf("Enter number of element:");
    scanf("%d",&n); 

    int arr[n];
    inputArray(arr , n);
    int sum = arraySum(arr , n);
    printf("Sum=%d \n", sum);
    return 0;
}

void inputArray(int arr[], int n){
    printf("Ebter %d element:\n",n);
    for(int i = 0;i<n ;i++){
        printf("Element %d:",i + 1);
        scanf("%d",&arr[1]);
    }
}
int arraySum(int arr[],int n){
    int total = 0;
    for(int i =0;i<n;i++) {
        total += arr[i];
    }
    return total;
}