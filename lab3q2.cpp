#include <iostream>

using namespace std;

int main (){
	float a,b,c;
	cout << "Please enter three numbers"<< endl;
	cin >>a>>b>>c;
	if ( a>b && b>c )
		{cout << a << " is the greatest number"<< endl;}
        else if ( b>c && c>a )
		{cout << b << " is the greatest number"<< endl;}
	else {cout << c << " is the greatest number"<< endl;}
return 0;
}
