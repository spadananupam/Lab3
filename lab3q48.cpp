#include <iostream>
using namespace std;
int main(){
	int n,num=2,test;
	cout <<"Please enter a number n\n";
	cin >>n;
	test=2;
	cout <<"Prime numbers less than "<<n<<" are ";
while (num<n){
	while (test<=num){
		if (num%test!=0){test++;}
		else if (num%test==0&&(test==num)){cout << num<<" " ;
		break;}
		}
num++;}
cout <<endl;
return 0;
}
	
