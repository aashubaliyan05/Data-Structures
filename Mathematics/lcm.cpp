#include<iostream>
using namespace std;


/*we take maximum of two numbers and check for minimum no time.
  a*b is surely a multiple of numbers that's why we iterate for min no time
  ex- a = 12 b = 20
        max = 20, min = 12
        a*b = 120 i.e. surely a multiple but we want the least
        20 * 1 = 20, 
        20 * 2 = 40
        20 * 3 = 60
        
*/
int lcmNaive(int a, int b){
    int lcm;
    int max = a>b?a:b;
    int min = a>b?b:a;
    for(int i = 1; i <= min; i++){
        if(max*i % a == 0 && max*i % b == 0){
            lcm = max*i;
            break;
        }
    }
    return lcm;
}

//GCD using Euclid 
// O(min(a,b)) Time Complexity
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

// a*b = lcm(a,b) * gcd(a,b)
// we use this to solve efficiently

int lcmGCD(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Lcm using Naive is : "<<lcmNaive(a,b)<<endl;
    cout<<"Lcm using GCD is : "<<lcmGCD(a,b);

    return 0;
}