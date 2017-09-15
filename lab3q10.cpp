#include <iostream>
using namespace std;
int main(){
	char d;
	cout << "Enter an alphabet\n";
	cin >> d;
	if (d>='a'&& d<='z')
	{cout << "The character is a lowercase alphabet\n";}
	else if (d>='A'&& d<='Z') {cout <<"The character is in uppercase\n";}
	else {cout << "The charecter is not an alphabet\n";}
	return 0;
}
