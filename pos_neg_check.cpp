/*
    C program to Check Whether a Number is Positive or Negative
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        cout<<n<<" is positive number";
    }else if(n<0){
        cout<<n<<" is negetive number";
    }else{
        cout<<n<<" is zero";
    }
    return 0;
}