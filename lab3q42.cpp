#include <iostream>
using namespace std;
int main(){
	int num,pow,res,i;
	cout << "Enter a number\n";
	cin >> num;
	cout << "To which power do you want to raise it to \n";
	cin >> pow;
	res=1;
	
	for (i=1;i<=pow;i++){
		res=res*num;}
	cout << "The result is "<<res<<endl;
	return 0;
}
