#include<stdio.h>
int main(){

    int arr[10], n, pos, value;
    printf("Enter the number of element in array : ");
    scanf("%d", &n);

    printf("Enter the element of array : ");
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert : ");
    scanf("%d",&pos);

    printf("Enter the value to insert : ");
    scanf("%d",&value);

    for(int i =n ; i>pos ;i--){
        arr[i] = arr[i-1];
    }

    arr[pos] = value ;
    n++;

    printf("Updated array : ");
    for(int i =0 ; i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0 ;
}