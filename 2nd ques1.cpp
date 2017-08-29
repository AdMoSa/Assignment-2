#include <iostream>
using namespace std;
int main()
{
float a,b,c;
cout << "Enter length in cm: ";
cin >> a;
b= a/100, c= b/1000;
cout << "Length in m: " << b;
cout << "Length in km: " << c;
return 0;
}
