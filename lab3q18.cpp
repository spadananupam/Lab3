#include <iostream>
using namespace std;
int main(){
	float cp,sp;
	cout << "Please enter the cost price of the commodity\n";
	cin >> cp;
	cout << "Please enter the selling price\n";
	cin >> sp;
	if ((sp-cp)>0){
		cout << "The profit of the seller is "<< sp-cp<<endl;
	}
	else if (sp==cp){cout << "There is no profit no loss\n";}
	else {cout<< "The loss of the seller is "<< cp-sp << endl;
	}	
return 0;
}
		
