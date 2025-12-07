/*
Write a program(using fork () and/or exec () commands) where parent and child 
execute: 
before terminating, the parent waits for the child to finish its task.
*/

#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;

int main() {
    pid_t pid = fork();
    if (pid<0)
        cout<<"Return Error.........."<<endl;
    else if (pid==0) {
        cout<<"Child Process Continues......"<<endl;
        for (int i=0; i<3; i++) {
            cout<<"Child Process ID: "<< getpid() << endl;
            cout<<"Child's Parent ID: "<< getppid() << endl;
        }
        cout<<"Child's Process ends............."<<endl;
    } else {
        wait(NULL);
        cout<<"Parent's Process continues.........."<<endl;
        for (int i=0; i<3; i++) {
            cout<<"Parent's Process ID: "<< getpid()<< endl;
            cout<<"Parent's Parent ID: "<< getppid()<< endl;
        }
        cout<<"Parent's Process ends........"<<endl;
    }
    return 0;

}


Child Process Continues......
Child Process ID: 74159
Child's Parent ID: 74158
Child Process ID: 74159
Child's Parent ID: 74158
Child Process ID: 74159
Child's Parent ID: 74158
Child's Process ends.............
Parent's Process continues..........
Parent's Process ID: 74158
Parent's Parent ID: 74143
Parent's Process ID: 74158
Parent's Parent ID: 74143
Parent's Process ID: 74158
Parent's Parent ID: 74143
Parent's Process ends........
