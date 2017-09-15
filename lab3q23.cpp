#include <iostream>
using namespace std;
int main(){
	int a,n;
	cout << "Please enter a number greater than 1 \n";
	cin >> n;
	a=n;
	cout << "The numbers less than equal to " <<n << " in reverse are\n";
	while (a>0){
		cout << a<< endl;
		a=a-1;
	}
	return 0;
}

