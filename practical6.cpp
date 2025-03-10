#include <iostream>
using namespace std;

// Function to perform Linear Search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, key;
    
    // Input size of array
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    // Input element to search
    cout << "Enter the element to search: ";
    cin >> key;
    
    // Call Linear Search Function
    int result = linearSearch(arr, n, key);
    
    // Output Result
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
