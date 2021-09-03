#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    vector<int> v1;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }   
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            v1.push_back(arr[i][j]);
        }
        sort(v1.begin(),v1.end());
        for(int k=0;k<col;k++){
            arr[i][k]=v1[k];
        }
        v1.erase(v1.begin(),v1.end());

    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }   
        cout<<endl;
    }
    
    return 0;
}