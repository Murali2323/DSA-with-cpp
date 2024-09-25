#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int uniqueElement = 0;
    for (int i = 0; i < n; i++) {
        uniqueElement ^= arr[i];
    }
    return uniqueElement;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Size of the array
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  // Input the array elements
        }
        cout << findUnique(arr, n) << endl;  // Print the unique element
    }
    return 0;
}
