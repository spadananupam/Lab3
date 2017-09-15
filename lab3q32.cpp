
#include <iostream>
#include <math.h>
using namespace std;

	int main(){
	int a,b,c,d,e,f,g,h;
	c=0;
	d=1;
	cout<<"Please enter a number\n";
	cin>>a;
	b=pow(10,c);
	while (d>0){
	b=pow(10,c);
	d=a/b;
	c++;}
	e=a/pow(10,(c-2));
	f=a/10;
	g=f*10;
	h=a-g;
	cout <<"The first digit is "<< e << " The last is "<<h<<endl;				return 0;
	}

