#include<iostream>
using namespace std;

void displayarray(int arr[], int size);
void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);


int main(){

    int size;
    cout<<"Enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter the elements of the array : \n";
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"Array before sorting is: ";
    displayarray(arr, size);
    mergeSort(arr, 0, size-1);
    displayarray(arr, size);
    return 0;

}


void displayarray(int arr[], int size){
    cout<<"\n";
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}

void merge(int arr[], int lowLeft, int highLeft, int highRight){
    int lowRight = highLeft + 1;
    int *mergedArray;
    int iLeft, iRight, iRes, size, iArr;
    size = highRight - lowLeft + 1;
    mergedArray = new int[size];

    iLeft = lowLeft;
    iRight = lowRight;
    iRes = 0;
    while(iLeft <= highLeft && iRight <= highRight){
        if(arr[iLeft] < arr[iRight]){
            mergedArray[iRes] = arr[iLeft];
            iRes++;
            iLeft++;
        }
        else{
            mergedArray[iRes] = arr[iRight];
            iRes++;
            iRight++;
        }
    }

    while(iLeft <= highLeft){
        mergedArray[iRes] = arr[iLeft];
        iRes++;
        iLeft++;
    }
    while(iRight <= highRight){
        mergedArray[iRes] = arr[iRight];
        iRes++;
        iRight++;
    }
    for(int i = 0, iArr = lowLeft; i < size ; i++, iArr++){
        arr[iArr] = mergedArray[i];
    }
    delete []mergedArray;
}

void mergeSort(int arr[], int low, int high){
    int mid;
    if(low == high){
        return ;
    }
    else{
        mid = (high + low)/2; 
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}
