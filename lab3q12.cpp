#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Please enter the number of the month whose number of days you want to see (1 to 12)\n";
	cin >> a;

	switch (a){
		case 1:
		cout << "It has 31 days\n";
		break;
		case 2:	
		cout << "Wait. For which year do you want the data\n";
		cin >> b;	
			
			if (b%4==0 && b%100!=0){cout << "It has 29 days\n";}
			else if (b%400==0){cout <<"It has 29 days\n";}
			else {cout << "It has 28 days.\n";}
			return 0;
		
		break;
		case 3:
		cout << "It has 31 days\n";
		break;
		case 4:
		cout << "It has 30 days\n";
		break;
		case 5:
		cout << "It has 31 days\n";
		break;
		case 6:
		cout << "It has 30 days\n";
		break;
		case 7:
		cout << "It has 31 days\n";
		break;
		case 8:
		cout << "It has 31 days\n";
		break;
		case 9:
		cout << "It has 30 days\n";
		break;
		case 10:
		cout << "It has 31 days\n";
		break;
		case 11:
		cout << "It has 30 days\n";
		break;
		case 12:
		cout << "It has 31 days\n";
		break;}
return 0;
}
