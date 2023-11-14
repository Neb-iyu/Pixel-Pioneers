//a code that calculates total miles driven 
#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    cout << " Tank capacity in Gallons:";
    int x;
    cin >> x;
    cout << "Miles travelled per Gallon: ";
    float y;
    cin >> y;
    float miles;
    miles = x * y;
     cout << "Total miles travelled by the total Gallon capacity: " << miles;
    return 0;
}