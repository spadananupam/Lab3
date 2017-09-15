#include <iostream>
using namespace std;

int main(){
	float a;
	cout << "Please enter an number" << endl;
        cin >> a;
	if (a>0){cout << " The number is positive\n";}
        else if (a<0){cout << "The number is negative\n";}
	else { cout << " The number is zero";}
	return 0 ;
}	
