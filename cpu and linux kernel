/*
Write a program to report behaviour of Linux kernel including kernel version, CPU 
type andCPU information. 
*/

#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<sys/utsname.h>
using namespace std;
int main()
{
    int i=0;
    struct utsname s1;
    i=uname(&s1);
    
    if(i==0)
    {
        cout<<"\n The name of System:"<< "system" << s1.sysname;
        cout<<"\n The version: " << s1.version<<endl;
        cout<<"\n The Machine: " << s1.machine<<endl;
        cout<< system("grep 'model name'/proc/cpuinfo");
    }
    
    else
    {
        cout<<("Error");
    }
    return 0;
}

 The name of System:systemLinux
 The version: #1 SMP Sat Sep 27 10:16:24 UTC 2025

 The Machine: x86_64
32512
