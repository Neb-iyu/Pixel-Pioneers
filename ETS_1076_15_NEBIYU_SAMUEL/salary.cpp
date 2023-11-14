#include <iostream>
using namespace std;
int main ()
{
    cout<<"please enter your name:";
    string name;
    cin>>name;
    cout<<"working hours:  ";
    float hour;
    cin>>hour;
    cout<<"bonus per hour:";
    float bonus;
    cin>>bonus;
    cout<<"base salary:";
    float base;
    cin>>base;



   double gross_salary =(bonus*hour) + base;
   double taxrate= 0.02*base;
   double net_salary=((bonus*hour) + base) - taxrate;
   double bonus_salary = bonus * hour;
cout<<"hey  "<<name<<endl;
cout<<"your gross_salary is: " <<gross_salary<<endl;
cout<<" your net_salary is:  "<<net_salary<<endl;
cout <<"your bonus_salary is: "<<bonus_salary; 


return 0;
}