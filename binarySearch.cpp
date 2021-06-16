#include<iostream>
using namespace std;

void binarySearch(int arr[], int size, int ele){
    bool found = false;
    int index,low,high,i,mid;
    low = 0;
    high = size-1;
    
    while((low <= high) && found == false){
        mid = high - low;
        if(ele == arr[mid]){
            found = true;
            index = mid;
        }
        else if(ele > arr[mid]){
            low = mid + 1;

        }
        else if(ele<arr[mid]){
            high = mid - 1;
        }

    }
    if(found)
        cout<<"Element found at index "<<index;
    else
        cout<<"Element not found";

}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the Array Elements in sorted order ";
    for(int i = 0;i < size; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element to search ";
    int ele;
    cin>>ele;
    binarySearch(arr, size, ele);
    return 0;
}