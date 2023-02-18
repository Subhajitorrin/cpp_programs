/*
    C++ Program to Reverse a Number without using Recursion
*/
#include<iostream>
using namespace std;
int main(){
    int n,rev=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
        rev=rev*10+(n%10);
        n/=10;
    }
    cout<<"Reverse is: "<<rev;
    return 0;
}