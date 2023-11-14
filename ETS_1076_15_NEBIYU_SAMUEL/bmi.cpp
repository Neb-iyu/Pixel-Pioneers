// a C++ program that calculates the BMI of a person
#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    cout << "Enter the weight: ";
    float x;
    cin >> x;
    cout << " Enter the Height: ";
    float y;
    cin >> y;
    float BMI;
    BMI = x /(pow(y,2));
    cout <<"The BMI is:" << BMI;
    return 0; 
    

}
