#include<bits/stdc++.h>
using namespace std;


/*Its a traditional method for reversing a number.
But there is a problem that it can not perform correctly when it encounter zero at the end of number
Example 1 -> 
            input number = 7890
            output number = 987

    Intially
            number = 7890
            reverse = 0

    1st iteration:       
            reverse = 0*10 + 0 => reverse = 0, number = 789

    2nd iteration:        
            reverse = 0*10 + 9=> reverse = 9, number = 78

*/

int reverseNumber(int number){
    int reverse = 0;
    while(number>0){
        reverse = reverse*10 + number%10;
        number/= 10;
    }
    return reverse;
}

//in this we use string reverse method to reverse a number
//we can use stoi later to convert that string to number

string reverseNum(string number){
    reverse(number.begin(),number.end());
    return number;
}

int main(){
    string number;
    cout<<"Enter a Number : ";
    cin>>number;
    cout<<"Reverse is "<<reverseNum(number);
    return 0;
}