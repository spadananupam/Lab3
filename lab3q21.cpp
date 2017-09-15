#include <iostream>
using namespace std;
int main(){
	float un;
	cout <<"How many units did you consume\n";
	cin >> un;
	if (un<=50){cout << "The bill amount is Rs."<< un*0.5<<endl;}
	else if (un<=150){cout << "The bill amount is Rs."<< (un-50)*0.75+50*0.5<< endl;}
	else if (un <= 250) {cout << "The bill amount is Rs."<< 50*0.5+100*0.75+(un-150)*1.2<<endl;}	
	else {cout << "The bill amount is Rs."<< 50*0.5+100*0.75+100*1.2+(un-250)*1.5<< endl;}
	return 0;

	}
