#include<iostream>

using namespace std;

void linearSearch(int arr[], int size, int ele){
    bool found = false;
    int index=0;
    for(int i=0;i<size;i++){
        if(arr[i]==ele){
            index=i;
            found = true;

        }
        else{
            continue;
        }
    }
    if(found){
        cout<<"Element found at "<<index;
    }
    else{
        cout<<"Element not found";
    }
}

int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the Array Elements ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the Element to search ";
    int ele;
    cin>>ele;
    linearSearch(arr,size,ele);
    return 0;
}
