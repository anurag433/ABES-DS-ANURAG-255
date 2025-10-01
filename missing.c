#include<stdio.h>
int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }
    return total - sum;
}


int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);



    int arr[n-1];
    printf("Enter numbers :");
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }



    int missing = findMissing(arr, n);
    printf("The missing number is: %d", missing);

    return 0;
}