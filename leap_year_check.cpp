/*
    C++ Program to Check Whether a given Year is a Leap Year
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter year ";cin>>n;
    if(n%400==0 || n%4==0&&n%100!=0){
        cout<<n<<" is leapyear";
    }else{
        cout<<n<<" is not leapyear";
    }
    return 0;
}