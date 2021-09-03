#include<bits/stdc++.h>
using namespace std;



//This method fails for numbers having very large factorial
long countZero(long factorial){
    long count =0;
    while(factorial%10==0){
        count++;
        factorial /= factorial;
    }
    return count;
}

//in this method
long countZeroPrime(int number){
    long count = 0;
    for(int i = 5; i < number; i = i*5){
        count += number/i;
    }
    return count;
}

long calFactorial(int number){
    long factorial =1;
    for(int i=number;i>0;i--){
        factorial = factorial*i;
    }
    return factorial;
}


int main(){
    cout<<"Enter a number : ";
    int number;
    cin>>number;
    long factorial = calFactorial(number);
    cout<<"Factorial of "<<number<<" is "<<factorial;
    cout<<"\nNumber of trailing zero's are  \n";
    cout<<"Using Traditional Method: "<<countZero(factorial)<<endl;
    cout<<"Using Prime Factor Method: "<<countZeroPrime(number);
    return 0;
}