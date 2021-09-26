#include<bits/stdc++.h>

using namespace std;


//Implementation using Sieve Algorithm
//O(n log log n) 

void findPrimeLesser(int number){
    vector<bool> isPrime(number+1,true);
    for(int i = 2; i <= number; i++){
        if(isPrime[i]){
            cout<<i<<endl;
            for(int j = i*i; j <= number; j = j+i){
                isPrime[j] = false;
            }   
        } 
    }
}

int main(){
    int number;
    cout<<"Find Prime Numbers less than : ";
    cin>>number;
    findPrimeLesser(number);
    return 0;
}