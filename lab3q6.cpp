#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "Which year do you want to check for?\n";
	cin >> a;
	if (a%4==0 && a%100!=0){cout << "This year is a leap year\n";}
	else if (a%400==0){cout <<"This year is a leap year\n";}
	else {cout << "This is not a leap year\n";}
	return 0;

}		
