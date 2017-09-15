#include <iostream>
using namespace std;
int main(){
	char d;
	cout << "Enter an alphabet\n";
	cin >> d;
	if ((d>='a'&& d<='z')||(d>='A'&& d<='Z'))
	{if (d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
		{cout << "The alphabet is a vowel\n";}
	else {cout << "The alphabet isnt a vowel\n";}}
	else {cout <<"Told you alphabet right?\n";}
	return 0;
}
