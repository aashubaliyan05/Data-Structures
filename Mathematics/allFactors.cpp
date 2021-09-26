#include<iostream>

using namespace std;

void factors(int number){
    int i;
    cout<<"Factors of "<<number<<" are "<<endl;
    for(i = 1; i*i < number; i++){
        if(number % i == 0){
            cout<<i<<endl;
        }
    }
    for( ; i >= 1; i--){
        if(number % i == 0){
            cout<<number/i<<endl;
        }
    }
}
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    factors(number);
    return 0;
}

