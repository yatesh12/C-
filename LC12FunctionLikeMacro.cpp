#include<iostream>
using namespace std;
#define MIN(a , b) (((a) < (b)) ? a : b )

int main(){
    int i = 100;
    int j = 30;

    cout<<"The minimum is : "<<MIN(i , j)<<endl;

    return 0;
}
