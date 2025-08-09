#include <iostream>
using namespace std;
int binarysearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2; // Calculate mid index
        if (arr[mid] == x) {
            return mid; // Return the index if found
        }
        if (arr[mid] < x) {
            l = mid + 1; // Search in the right half
        } else {
            r = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);   
    int x = 0; // Element to be searched
    int result = binarysearch(arr, 0, n - 1, x);       
    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }

    cout<<"\a";
    return 0;
}