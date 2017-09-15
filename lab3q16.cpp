#include <iostream>
using namespace std;
int main(){
	float a,b,c;
	cout <<"Please enter the sides of a triangle"<<endl;
	cin >>a>>b>>c;	
if ((a>0&&b>0&&c>0)&&((a+b>c)&&(b+c>a)&&(c+a>b)))
	{
	if (a==b==c){cout <<"The triangle is equilateral"<<endl;}
	else if (a==b||b==c||c==a){cout << "The triangle is isosceles\n";}
	else {cout << "The triangle is scalene\n";};}
else {cout <<"No this triangle is not possible\n";}
	return 0;
}
