#include <iostream>
using namespace std;
int main(){
	char d;
	cout << "Enter a character\n";
	cin >> d;
	if ((d>='a'&& d<='z')||(d>='A'&& d<='Z'))
	{cout << "The character is an alphabet\n";}
	else {cout <<"The character isnt an alphabet\n";}
	return 0;
}
