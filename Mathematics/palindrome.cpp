#include<bits/stdc++.h>

using namespace std;

string isPalindrome(string inputString){
    string reversedString = inputString;
    reverse(reversedString.begin(),reversedString.end());
    if(reversedString == inputString){
        return "Palindrome";
    }
    else{
        return "Not Palindrome";
    }
}

int main(){
    string inputString;
    cout<<"Enter Something : ";
    cin>>inputString;
    cout<<inputString+" is "+isPalindrome(inputString);
    return 0;
}