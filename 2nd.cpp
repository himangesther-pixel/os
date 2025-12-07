#include <iostream>
#include <unistd.h>     // for fork(), getpid()
#include <sys/types.h>  // for pid_t

using namespace std;

int main() {
    pid_t pid = fork();   // Create a new process

    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return 1;
    }
    else if (pid == 0) {
        // Child process
        cout << "This is the Child Process!" << endl;
        cout << "Child PID (from parent): " << getpid() << endl;
        cout << "Parent PID (from child): " << getppid() << endl;
    }
    else {
        // Parent process
        cout << "This is the Parent Process!" << endl;
        cout << "Parent PID: " << getpid() << endl;
        cout << "Child PID (from parent): " << pid << endl;
    }

    return 0;
}




This is the Parent Process!
Parent PID: 13690
Child PID (from parent): 13691

This is the Child Process!
Child PID: 13691
Parent PID (from child): 13690


#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    cout << "PID of this process is: " << getpid() << endl;
    return 0;
}
