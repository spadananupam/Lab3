#include <iostream>
#include <math.h>
using namespace std;
int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,dgt;

int cat_1(){
	
	switch (dgt){
		case 0:
		cout << "zero ";
		break;
		case 1:
		cout << "one ";
		break;
	        case 2:
		cout << "two ";
		break;
		case 3:
		cout << "three ";
                break;
		case 4:
                cout << "four ";
                break;
		case 5:
                cout << "five ";
                break;
		case 6:
                cout << "six ";
                break;
		case 7:
		cout << "seven ";
		break;
		case 8:
		cout << "eight ";
		break;
		case 9:
		cout << "nine ";
		break;
	}
			return 0;
}	
int main(){
a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	int a;
	int b,c,d,e,f,j,k,sum;
	c=0;
	d=1;
	sum=0;
	cout<<"Please enter a number\n";
	cin>>a;
	int b1,c1,d1,e1,f1,j1,k1,sum1;
	c1=0;
	d1=1;
	sum1=0;
	b1=pow(10,c1);
	while (d1>0){
	b1=pow(10,c1);
	d1=a/b1;
	c1++;}
	e1=c1-1;
	//to reverse
	j1=e1;
	while (j1>=0){
		k1=a%10;
		a=a/10;
		sum1=k1*pow(10,j1-1)+sum1;
		j1=j1-1;}	
	
	b=pow(10,c);
	while (d>0){
	b=pow(10,c);
	d=sum1/b;	c++;}
   	e=c-1;
	j=e;
		cout << "The number in words is ";
		while (j>=0){
		k=sum1%10;
		sum1=sum1/10;
		dgt=k;
		if (dgt!=0){
		
		cat_1();
		}
		j=j-1;}
cout <<"\n";
		
return 1;}
