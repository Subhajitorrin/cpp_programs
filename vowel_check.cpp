/*
    C++ Program to Check Whether a Character is a Vowel, Consonant or Digit
*/
#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"Enter a character: ";cin>>n;
    if(n>='a'&&n<='z' || n>='A'&&n<='Z'){
        switch(n){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':cout<<n<<" is Vowel";break;
            default: cout<<n<<" is consonant";
        }
    }else if(n>='0'&&n<='9'){
        cout<<n<<" is digit";
    }
    return 0;
}