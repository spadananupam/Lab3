#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,d,e,f,r1,r2;
	cout << "We will help you to get the roots of a quadratic equation, but please enter numerical values for the coefficients.\nThe standard equation used here is,\nax^2+bx+c\n";
	cout <<"Please enter the coefficient of x^2,x and the constant term\n";
	cin >>a>>b>>c;
	e=pow(b,2.0);
	d=e-4.0*a*c;
	f=pow(d,0.5);
	r1=(-b+f)/(2.0*a);
	r2=(-b-f)/(2.0*a);
	cout << "The roots are "<<r1<<"and "<<r2<<endl;
	return 0;
}

