#include<iostream>
using namespace std;

//Least Efficient
int gcdNaive(int a, int b){
    int gcd;
    for(int i=(a<b?a:b)/2; i>0;i--){
        if(a%i == 0 && b%i == 0){
            gcd = i;
            break;
        }
    }
    return gcd;
}


int gcdEuclidBasic(int a, int b){
    while(a!=b){
        if(a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}

//MOst efficient
int gcdEuclidRec(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcdEuclidRec(b, a%b);
    }
}


int main(){
    int a,b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"GCD of "<<a<<" & "<<b<<" using Naive is "<<gcdNaive(a,b)<<endl;
    cout<<"GCD of "<<a<<" & "<<b<<" using Euclid Basic is "<<gcdEuclidBasic(a,b)<<endl;
    cout<<"GCD of "<<a<<" & "<<b<<" using Euclid Recurive is "<<gcdEuclidRec(a,b)<<endl;

    return 0;
}