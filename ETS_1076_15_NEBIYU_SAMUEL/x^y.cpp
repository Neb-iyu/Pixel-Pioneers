// a c++ program that calculates x^y, where x and y are entered by the user
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    result = pow(x, y);

    cout << "The result of the expression " << x << "^" << y << " is: " << result << std::endl;

    return 0;
}