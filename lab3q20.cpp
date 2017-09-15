#include <iostream>
using namespace std;
int main(){
	float basic;
	cout << "Please enter your basic salary\n";
	cin >>basic;
	if (basic <= 10000)
	{cout << "The gross salary is "<< 2*basic <<endl;}
	else if (basic <= 20000)
	{cout << "The gross salary is "<< 2.15*basic << endl;}
	else {cout << "The gross salary is "<< 2.25*basic << endl;}
return 0;
}
