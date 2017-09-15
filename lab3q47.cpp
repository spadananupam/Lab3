#include <iostream>
using namespace std;
int main(){
	int num,test;
	cout << "Please enter a number ";
	cin >>num;
	test=2;
	while (test<=num){
		if (num%test!=0){test++;}
		else if (num%test==0&&(test!=num)){
		cout <<"The number is not prime \n";
		break;}
		else if (num%test==0&&(test==num)){cout << "The number is prime \n";
			break;
		}}
	return 0;
}
