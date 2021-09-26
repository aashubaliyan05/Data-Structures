#include<iostream>
using namespace std;

int calPower(int number, int power){
    int res = 1;
    while(power > 0){
        
        if(power & 1){ //number % 2 != 0 
            res = res*number ;
        }
        number *= number;
        power = power>>1; //  power = power/2
    }
    return res;
}

int main(){
    cout<<"Enter a number and its power: " ;
    int number, power;
    cin>>number>>power;
    cout<<number<<" ^ "<<power<<" = "<<calPower(number, power);
    return 0;
}