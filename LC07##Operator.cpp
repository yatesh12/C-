#include<iostream>
using namespace std;
#define concat(a , b) a##b

// When CONCAT in the program, its argument are
// concated and used to replace the macro

int main(){
int xy = 100;

string str1 = " HELLO WORLD ";

cout<< concat(x , y)<<endl;
cout<<concat(str, 1) << endl;
return 0;
}