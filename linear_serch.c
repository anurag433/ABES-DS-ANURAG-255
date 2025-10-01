#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i = 0 ; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the key : ");
    scanf("%d", &key);

    int flag = 0 ;
    for(int i = 0 ; i<n; i++){
        if(arr[i] == key){
           flag = 1 ;
           break ;
        }
    }
    if(flag == 1 ){
        printf("found");
    }
    else{
         printf(" not found");
    }
    }