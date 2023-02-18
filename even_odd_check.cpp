/*
    C++ Program to Check Whether a Number is Even or Odd
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even number";
    }else if(n%2!=0){
        cout<<n<<" is odd number";
    }else{
        cout<<n<<" is zero";
    }
    return 0;
}