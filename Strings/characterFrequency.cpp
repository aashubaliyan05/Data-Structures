#include<bits/stdc++.h>
using namespace std;


//O(n) Time Complexity
void charFrequency(string input){
    int arr[27] = {0};
    for(int i=0; i<=input.length(); i++){
        int ele = input[i];
        if(ele==32){
            arr[26]++;
        }
        else{
            arr[ele-'a']++;
        }
        
    }
    for(int i=0;i<27;i++){
        if(i==26){
            cout<<"White Spaces "<<arr[i];
        }
        else{
            cout<<(char(i+'a'))<<" "<<arr[i]<<endl;
        }  
    }
}



int main(){
    string input;
    getline(cin,input);
    charFrequency(input);
    return 0;
}