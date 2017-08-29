#include <iostream>
using namespace std;
int main()
{
float a,b;
cout << "Enter Temp(Fahrenheit): ";
cin >> a;
b=((a-32)*5)/9;
cout << "Temp(Celsius): " << b;
}
