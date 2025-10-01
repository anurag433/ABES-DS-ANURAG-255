#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int a[50], b[50], uni[100];

    printf("Enter number of element in first set: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        uni[k++] = a[i];  
    }

    
    printf("Enter number of element in second set: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);

        
        int found = 0;
        for (j = 0; j < k; j++) {
            if (b[i] == uni[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uni[k++] = b[i];
        }
    }

    
    printf("Union : ");
    for (i = 0; i < k; i++) {
        printf("%d ", uni[i]);
    }
    printf("\n");

    return 0;
}
