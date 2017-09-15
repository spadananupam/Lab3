#include <iostream>
using namespace std;
int main(){
	float a,b,c;
	cout <<"Please enter the sides of a triangle"<<endl;
	cin >>a>>b>>c;	
	if ((a+b>c)&&(b+c>a)&&(c+a>b))
	{cout << "The triangle can be made\n";}
	else {cout <<"No this triangle is not possible\n";}
	return 0;
}
