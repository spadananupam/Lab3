#include <iostream>
using namespace std;
int main(){
	int a,n,sum;
	sum =0;
	a=1;
	cout << "Please enter upto which number you want to get the sum\n";
	cin >>n;
	 
	while (a<=n)
	{ sum+=a;
	  a++;	
	}
	cout << "The sum of the "<< n << " natural numbers is "<< sum << endl;
	return 0;
}
	
		
			

