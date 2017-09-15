#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,d;
	c=0;
	d=1;
	cout<<"Please enter a number\n";
	cin>>a;
	b=pow(10,c);
	while (d>0){
		b=pow(10,c);
		d=a/b;
		c++;}
	cout <<"The number of digits in "<<a<< " is "<<(c-1)<< endl;
	return 0;}

