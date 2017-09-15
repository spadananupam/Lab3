#include <iostream>
using namespace std;
int main(){
	int a;
	cout << "Please enter the number of the day you want to see (1 to 7)\n";
	cin >> a;
	switch (a){
		case 1:
		cout << "Its a monday\n";
		break;
		case 2:
		cout << "Its a tuesday\n";
		break;
		case 3:
		cout << "Its a wednsday\n";
		break;
		case 4:
		cout << "Its a thursday\n";
		break;
		case 5:
		cout << "Its a friday\n";
		break;
		case 6:
		cout << "Its a saturday\n";
		break;
		case 7:
		cout << "Its a sunday\n";
		break;
			}
return 0;
}

