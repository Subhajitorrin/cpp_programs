/*
    C++ Program to Check if a Number is an Adam Number
*/
#include<iostream>
using namespace std;
//function to square then reverse
int square_then_rev(int n){
    int rev=0,sq;
    sq=n*n;
    while(sq){
        rev=rev*10+(sq%10);
        sq/=10;
    }
    return rev;
}
//function to reverse then square
int rev_then_square(int n){
    int rev=0;
    while(n){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev*rev;
}
int main(){
    int n,rev,rev1,sq1,sq2;
    cout<<"Enter number: ";
    cin>>n;
    if(square_then_rev(n)==rev_then_square(n)){
        cout<<"Adam number";
    }else{
        cout<<"Not Adam number";
    }
    return 0;
}
/*
    steps to check adam number
    i)      A number - 12
    ii)     square of number 12*12 = 144
    iii)    reverse the result number 441
    iv)     reverse entered number - 21
    v)      square of entered reversed number 21*21 = 441
    check "iii" and "v"
*/