#include <iostream>
using namespace std;
int main(){
	int n,a;
	a=1;
	cout <<"Please enter a number\n";
	cin >>n;
	cout <<"The series of natural numbers from 1 to" <<n <<" is\n ";
	while (a<=n)
	{	cout << a<<endl;
		a++;}
	return 0;
}

