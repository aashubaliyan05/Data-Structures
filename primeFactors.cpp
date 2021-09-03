#include<iostream>
using namespace std;


void printPrimeFactors(int number){
    if(number == 0 or number == 1){
        return ;
    }
    while(number % 2 == 0){
        cout<<2<<endl;
        number /= 2;
    }
    while(number % 3 == 0){
        cout<<3<<endl;
        number /= 3;
    }
    for(int i = 5; i*i <= number ; i += 6){
            while(number % i == 0){
                cout<<i<<endl;
                number /= i;
            }
            while(number % (i+2) == 0){
                cout<<i+2<<endl;
                number /= (i+2);
            }
    }

}
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    printPrimeFactors(number);
    return 0;
}