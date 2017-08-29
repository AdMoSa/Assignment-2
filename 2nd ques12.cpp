#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float P,r,t,A,n,x,y,z,C;
cout << "Enter Principal: ";
cin >> P;
cout << "Annual rate of interest(in decimals): ";
cin >> r;
cout << "no of years amount is borrowed for: ";
cin >> t;
cout << "no of times the interest is compounded per year: ";
cin >> n;
x= 1+ (r/n);
y= n*t;
z= pow(x,y);
A= P*z;
C= A-P;
cout << "Amount accumulated: " << A;
cout << "Compund interest: " << C;
}
