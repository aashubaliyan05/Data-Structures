#include<iostream>

using namespace std;

int main(){
    int number, voltage;
    cin>>number>>voltage;
    int count = 0;
    for(int i = 1; i<=number; i++){
        for(int j =1; j<= number; j++){
            if(i*j == voltage){
                count++;
            }
        }
    }
    if(count == 0){
        cout<<"NO POWER";
    }
    else{
        cout<<count;
    }
    return 0;
    
}