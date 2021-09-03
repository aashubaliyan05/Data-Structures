#include<bits/stdc++.h>
using namespace std;

void frequency(vector<int> v1){
    unordered_map<int,int> um;
    for(int i = 0; i < v1.size(); i++){
        um[v1[i]]++;
    }
    int max = 0,maxEle=0;
    
    for(auto x:um){
        if(x.second > max){
                max = x.second;
                maxEle = x.first;
        }
    }
    cout<<maxEle<<" occured maximum "<<max<<" times";

}
int main(){
    int size,ele;
    cin>>size;
    vector<int>v1;
    for(int i = 1; i <= size; i++){
        cin>>ele;
        v1.push_back(ele);
    }
    frequency(v1);
    sort(v1.begin(),v1.end());


    return 0;
}