#include<iostream>
#include<csignal>
#include<unistd.h>
using namespace std;

void signalHandler( int signum){
    cout<<"Interrupt signal (" <<signum<<")received.\n"<<endl;

    // cleanup and close up stuff here
    // terminate program

}
int main(){
    // register signal SIGINT and signal
    signal(SIGINT, signalHandler);  // first argument as an integer which represent signal number
                                   // and second argument as an function to the signal-handler function

    while(1){
        cout<<"Going to sleep...."<<endl;
        sleep(1);

    }
    return 0;
}