#include<iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {

    // Sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    int L[1000], R[1000];

    // Copy data to left subarray L[]
    for(int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Copy data to right subarray R[]
    for(int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the two arrays back into arr[]
    int i = 0, j = 0, k = left;

    // Compare elements and merge
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from L[]
    while(i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy remaining elements from R[]
    while(j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {

    if(left < right) {

        // Find middle index
        int mid = (left + right) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge the two sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    int n, arr[1000];

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call merge sort
    mergeSort(arr, 0, n - 1);

    // Print sorted array
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
