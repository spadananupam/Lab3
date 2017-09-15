#include <iostream>
#include <math.h>
using namespace std;
int a1;
int qwerty(){
	if (a1==1)cout <<"0";
	else if (a1==2)cout <<"1";
	else if (a1==0)cout <<"1";
	return 0;
}
int main() {
	int a,b,c,d,e,f,j,k,sum;
	c=0;
	d=1;
	sum=0;
	cout<<"Please enter a binary number\n";
	cin>>a	;
	if (a%10==0){a=a+2;}
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
	if (sum%10==0){sum=sum+2;}
cout << "The ones complement is \n";	
//sum is reversed binary
while (sum>0){
a1=sum%10;
sum=sum/10;
qwerty();
}
cout <<endl;
return 0;
}
