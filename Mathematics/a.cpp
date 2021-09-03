#include<iostream>
#include<math.h>
using namespace std;
int maxof(int n,int m){
    int result;
    if(n%m==0){
        return n;
    }
    else{
        int p = n/m;
        int r1  = abs(((p+1)*m)-n);
        int r2 = abs((p*m)-n);
        cout<<r1<<" "<<r2<<endl;
        if (r1<r2){
           return (p+1)*m; 
        }else{
            return p*m;
        }


    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int result = maxof(n,m);
    cout<<result;
}