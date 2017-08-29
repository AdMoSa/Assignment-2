#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float a,b,c;
cout << "Side of Equilateral triangle: ";
cin >> a;
b= pow(3,0.5);
c= b*a/4;
cout << "Area: " << c;
}
