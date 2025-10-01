#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;
    int a[50], b[50], inter[50];

    printf("Enter number of elements in first set: ");
    scanf("%d", &n1);
    printf("Enter set:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    
    printf("Enter number of elements in second set: ");
    scanf("%d", &n2);
    printf("Enter elements :\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                
                int found = 0;
                for (int x = 0; x < k; x++) {
                    if (inter[x] == a[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    inter[k++] = a[i];
                }
            }
        }
    }

    
    printf("Intersection  ");
    for (i = 0; i < k; i++) {
        printf("%d ", inter[i]);
    }
    printf("\n");

    return 0;
}
