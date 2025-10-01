// Program for  delete the given number in given array
#include<stdio.h>
int main(){
    int arr[10], n, pos;
    printf("Enter the number of element in array : ");
    scanf("%d", &n);

    printf("Enter the element of array : ");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete : ");
    scanf("%d",&pos);

    for(int i = pos; i < n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

    printf("Updated array : ");
    for(int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0 ;
}