#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,d,e,f,j,k,sum;
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
	e=c-1;
	//to reverse
	j=e;
	while (j>=0){
		k=a%10;
		a=a/10;
		sum=k*pow(10,j-1)+sum;
		j=j-1;}	
	cout <<"The number reversed is, "<< sum<<endl;
	return 0;}

