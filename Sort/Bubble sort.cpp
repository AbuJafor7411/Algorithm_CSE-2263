#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    int arr[100];
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    cout << "Enter " << n << " elements: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        // Last i elements are already sorted
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    cout << "Sorted array:\n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
