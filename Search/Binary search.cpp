#include<iostream>

using namespace std;

int main(){
    int arr[100], size, target, mid, low, high;
    cout<<"Enter the size: ";
    cin>>size;
    cout<<"Enter "<< size <<"  elements(Sorted): ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    low = 0;
    high = size - 1;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == target){
            cout<<"Element found at index: "<<mid<<endl;
            return 0;
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"Element not found"<<endl;
}
