#include<iostream>
using namespace std;

//traditional solution
long calFactorial(int number){
    long factorial =1;
    for(int i=number;i>0;i--){
        factorial = factorial*i;
    }
    return factorial;
}

//recursive solution
long recFactorial(int number){
    if(number <= 1){
        return 1;
    }
    else{
        return number*recFactorial(number-1);
    }
}

int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Factorial is "<<calFactorial(number);
    return 0;
}
