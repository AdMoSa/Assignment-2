#include <iostream>
using namespace std;
int main()
{
float a,b,c,d;
cout << "Enter Principal: ";
cin >> a;
cout << "Enter rate of interest(in percentage) per unit time: ";
cin >> b;
cout << "Enter no of unit time: ";
cin >> c;
d= (a*b*c)/100;
cout << "Simple interest: " << d;
}
