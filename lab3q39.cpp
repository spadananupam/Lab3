#include <iostream>
#include <math.h>
using namespace std;
int a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,dgt;

int cat_1(){
	
	switch (dgt){
		case 0:
		a0=a0+1;
		break;
		case 1:
		a1=a1+1;
		break;
	        case 2:
		a2=a2+1;
		break;
		case 3:
		a3=a3+1;
                break;
		case 4:
                a4=a4+1;
                break;
		case 5:
                a5=a5+1;
                break;
		case 6:
                a6=a6+1;
                break;
		case 7:
		a7=a7+1;
		break;
		case 8:
		a8=a8+1;
		break;
		case 9:
		a9=a9+1;
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
	b=pow(10,c);
										while (d>0){
												b=pow(10,c);									d=a/b;										c++;}										e=c-1;										j=e;
		while (j>=0){
		k=a%10;
		a=a/10;
		dgt=k;
		cat_1();
		j=j-1;}

		cout <<"Frequency of digits are : 0: "<<a0<<" 1: "<<a1<< " 2: "<<a2<<" 3: "<<a3<<" 4: "<<a4<<" 5:" <<a5<<" 6:"<<a6<<" 7: "<<a7<<" 8: "<<a8<<" 9: "<<a9<<endl;
return 1;
}
