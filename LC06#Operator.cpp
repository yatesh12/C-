#include<iostream>
using namespace std;
#define MkSTR( a ) #a

// Note:
// # stringizing operator
// The # operator causes a replacement-text taken
// to be converted string surrounded by quotes
int main(){
    cout<< MkSTR(HELLO C++)<<endl;

    return 0;
}