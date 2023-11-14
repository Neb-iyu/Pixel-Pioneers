// a c++ program that calculates how long it take to send a file
#include <iostream>
using namespace std;
int main() 
{
    cout<<"File size (in megabytes): ";
    int fs;
    cin>>fs;

    cout<<"The time it takes is "<<fs/(float)0.0009155<<" seconds.\n";
    return 0;
}