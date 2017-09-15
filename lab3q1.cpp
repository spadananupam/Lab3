#include <iostream>
using namespace std;
int main (){
	float a,b,c ;
	cout << "Please enter two numbers\n";
	cin >> a >> b;
        c=a-b;
	if (c>0)
		{cout << a << " is greater than " << b<< endl;}
	else if (c<0)
		{cout << a << " is less than " << b << endl;}
        else {cout << "They are equal" << endl;}
return 0;}
