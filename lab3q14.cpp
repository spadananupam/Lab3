#include <iostream>
using namespace std;
int main (){
	float a,b,c;
	cout <<"PLease enter the angles of the triangle.\n";
	cin >> a >> b >> c;
	if (a+b+c==180){cout << "The triangle exists\n";
	}
	else {cout<<"The triangle cannot exist\n";}
	return 0;

}
