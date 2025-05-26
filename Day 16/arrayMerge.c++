#include <iostream>
using namespace std;
int main() {
    int arr1[4] = {1,2,3,4};
    int arr2[4] = {5,6,7,8};  
    int arr3[sizeof(arr1)/sizeof(arr1[0]) + sizeof(arr2)/sizeof(arr2[0])];
    for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) {
        arr3[i + sizeof(arr1)/sizeof(arr1[0])] = arr2[i];
    }
    cout << "Merged array: ";
    for (int i = 0; i < sizeof(arr3)/sizeof(arr3[0]); i++) {
        cout << arr3[i] << " ";
    }
}