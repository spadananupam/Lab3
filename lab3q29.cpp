#include <iostream>
using namespace std;
int main(){
	int a,n,sum;
	sum =0;
	a=2;
	cout << "Please enter upto which number you want to get the sum\n";
	cin >>n;
	 
	while (a<=n)
	{ sum+=a;
	  a+2;	
	}
	cout << "The sum upto "<< n << " , for even natural numbers is "<< sum << endl;
	return 0;
}
	
		
