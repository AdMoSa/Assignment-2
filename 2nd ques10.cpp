#include <iostream>
using namespace std;
int main()
{
float a,b,c,d,e,f,g,h,i;
cout << "Enter marks of 5 subjects: ";
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
cout << "Enter max marks: ";
cin >> f;
g= (a+b+c+d+e);
h= g/5;
i=(g*100)/(5*f);
cout << "Total marks: " << g;
cout << "Avg marks: " << h;
cout << "Percentage: " << i << "%";
}
