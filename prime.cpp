#include<iostream>
using namespace std;


//O(sqrt(n)) Time Complexity
string checkPrime(int number){
    if(number == 0 or number == 1){
        return "Neither Prime Nor Composite ";
    }
    else if(number == 2 or number == 3){
        return "Prime";
    }
    else if(number % 2 == 0 || number % 3 == 0){
        return "Not Prime";
    }
    else{
        for(int i = 5; i*i <= number ; i += 6){
            if(number % i == 0 || number % (i+2) == 0){
                return "Not Prime";
            }
        }
    }
    return "Prime";
}

void printPrime(int lower, int upper){
    int count = 0;
    for(int i = lower; i <= upper ; i++){
        if(checkPrime(i) == "Prime"){
            cout<<i<<endl;
            count++;
        }
    }
    cout<<"There are "<<count<<" no in range"<<endl;
}

int main(){
    cout<<"\nPrime Menu \n";
    cout<<"\n1. Check a Number \n2. Prime in Range\n3. Prime lower than \n4. Exit \n";
    cout<<"\nEnter a choice : ";
    int ch;
    cin>>ch;
    switch(ch){
        case 1: {
            cout<<"\nEnter a Number : ";
            int number;
            cin>>number;
            cout<<number<<" is "<<checkPrime(number)<<endl;
            break;
        }
        case 2: {
            cout<<"\nEnter lower and upper bounds to check : ";
            int lower,upper;
            cin>>lower>>upper;
            lower = lower > upper ? upper : lower;
            upper = upper > lower ? upper : lower;
            printPrime(lower,upper);
            break;
        };
        case 3: {
            cout<<"\nEnter a number : ";
            int number;
            cin>>number;
            printPrime(1,number);
            break;
        }
        case 4: break;
        default: cout<<"Enter a valid case :";

    }
    return 0;
}