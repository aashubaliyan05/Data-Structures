#include<iostream>
using namespace std;

void displayarray(int arr[], int size){
    cout<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int minOfIndex(int arr[], int low, int high){
    int min, minIndex;
    min = arr[low];
    minIndex = low;
    for(int i = low ; i <=high-1 ; i++){
        if( arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;  
}

void swap(int &i, int &minIndex){
    int temp = i;
    i = minIndex;
    minIndex = temp;
}

void selectionSort(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        int minIndex = minOfIndex(arr,i,size);
        swap(arr[i],arr[minIndex]);
    }
}


int main(){
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of the array :\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting is: ";
    displayarray(arr,size);
    cout<<"\nArray after sorting is: ";
    selectionSort(arr,size);
    displayarray(arr,size);

    
    return 0;
}