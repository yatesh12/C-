#include<iostream>
using namespace std;

//first name space
namespace first_space{
    void func(){
   cout<<"Inside first_space"<<endl;
    }
}

// second name space
namespace second_space{
    void func(){
   cout<<"Inside second_space"<<endl;
    }
}

using namespace second_space;
int main(){
    //This calls function from first name space
    func();
    return 0;
}


//Note:
/*1. If we create 2 same function in different namespace by
 using line 18 commmand, we can called particular function.
 
 2. NAmespace provoid the space where we can define or 
 declare identifier i.e. variable, method, classes*/