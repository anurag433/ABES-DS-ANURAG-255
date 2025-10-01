// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key){
//     int start = 0;
//     int end = size - 1;

//     while(start <= end){
//         int mid = start + (end - start) / 2;

//         if(arr[mid] == key){
//             return mid;
//         }
//         else if(arr[mid] < key){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n, key;
//     cout<<"Enter size: "; 
//     cin >> n;
//     int arr[n]; 
//     cout<<"Enter the: "<<endl;
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     cout<<"Array: "<<endl; 
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " "; 
//     }
//     cout << endl; 
//     cout << "Enter the key : "; 
//     cin >> key; 
//     int result = binarySearch(arr, n, key); 

//     if (result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found." << endl;
//     }

//     return 0;
// }





bool binarySearch(v.begin(),v.end(),value){
    vector<int> v ;
    while(true){
        cin>>value;
        if(value==-1){
            break ; 
            v.push_back(value):

        }
    }
}

int  main(){
    int value ; 
    int n = binarySearch(v.begin(),v.end(),value);
    if(n){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}