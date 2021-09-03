#include<bits/stdc++.h>
#include<string>
using namespace std;

//O(n) time complexity -> depends on no of digits in number

int countDigits(int number){
    int count = 0;
    while(number>0){
        number /= 10;
        count++;
    }
    return count;
}

int countDigits(string number){
    int count = 0;
    count = number.length();
    return count;
}

int main(){
    int number;
    cout<<"Enter a Number : ";
    cin>>number;
    int digitsCount = countDigits(to_string(number));
    cout<<"There are "<<digitsCount<<" digits in "<<number;
    return 0;
}