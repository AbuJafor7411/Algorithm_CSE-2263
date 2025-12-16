#include <iostream>

using namespace std;

int main() {
    int n, i, j, target;
    int arr[100];

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter "<< n <<" elements:";
    for (i = 0; i < n; i++) {
        cin>>arr[i];
    }

    // Insertion Sort
    for (i = 1; i < n; i++) {
        target = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > target) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = target;
    }

    cout<<"Sorted array:\n";
    for (i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}
