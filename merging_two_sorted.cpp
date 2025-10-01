// #include <stdio.h>

// void merge(int arr1[], int m, int arr2[], int n, int merged[]) {
//     int i = 0, j = 0, k = 0;
//     while (i < m && j < n) {
//         if (arr1[i] < arr2[j])
//             merged[k++] = arr1[i++];
//         else
//             merged[k++] = arr2[j++];
//     }
//     while (i < m)
//         merged[k++] = arr1[i++];
//     while (j < n)
//         merged[k++] = arr2[j++];
// }

// int main() {
//     int arr1[] = {1, 3, 5, 7};
//     int arr2[] = {2, 4, 6, 8, 10};
//     int m = sizeof(arr1) ;
//     int n = sizeof(arr2) ;
//     int merged[m + n];

//     merge(arr1, m, arr2, n, merged);

//     printf("Merged array: ");
//     for (int i = 0; i < m + n; i++)
//         printf("%d ", merged[i]);
//      printf("\n");

//     printf("%d m",m);
//     printf("%d n",n);

//     return 0;
// }




// #include <iostream>
// #include <vector>

// void merge(const vector<int>& arr1, const vector<int>& arr2, vector<int>& merged) {
//     int i = 0, j = 0, k = 0;
//     while (i < arr1.size() && j < arr2.size()) {
//         if (arr1[i] < arr2[j])
//             merged[k++] = arr1[i++];
//         else
//             merged[k++] = arr2[j++];
//     }
//     while (i < arr1.size())
//         merged[k++] = arr1[i++];
//     while (j < arr2.size())
//         merged[k++] = arr2[j++];
// }

// int main() {
//     vector<int> arr1 = {1, 3, 5, 7};
//     vector<int> arr2 = {2, 4, 6, 8, 10};
//     vector<int> merged(arr1.size() + arr2.size());

//     merge(arr1, arr2, merged);

//     cout << "Merged array: ";
//     for (int i = 0; i < merged.size(); i++)
//         cout << merged[i] << " ";
//     cout << endl;

//     cout << arr1.size() << " m" << endl;
//     cout << arr2.size() << " n" << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {1, 3, 5, 7}; 
    vector<int> v2 = {2, 4, 6, 8, 10}; 
    vector<int> v3(v1.size() + v2.size()); 

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin()); 

    cout << "Merge array: ";
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " "; 
    cout << endl;

    cout << v1.size() << endl; 
    cout << v2.size() << endl; 

    return 0;
}