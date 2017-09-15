#include <iostream>
using namespace std;
int main(){
	char d;
	cout << "Enter a character\n";
	cin >> d;
	if ((d>='a'&& d<='z')||(d>='A'&& d<='Z'))
		{cout << "The character is an alphabet\n";}
	else if (d>=0 || d<0)
		{cout << "The character is numeric\n";}
	else    {cout << "The number is a special character";}
	return 0;
}
