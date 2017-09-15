#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int a,b,c,d,e,f,g,sum;
	c=0;
	d=1;
	sum=0;
	cout<<"Please enter a number\n";
	cin>>a;
	b=pow(10,c);
	while (d>0){
		b=pow(10,c);
		d=a/b;
		c++;}
	e=c-1;//number of digits
	//a =number
	g=a;
	while (g>0){
		
		//1
		f=g%10;
		g=g/10;
		sum=sum+f*f*f;}
	if (sum==a){cout << "The number is an amstrong number\n";}	
	else {cout <<"The number is not an amstrong number\n";}	
return 0;
}		
