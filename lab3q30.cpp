#include<iostream>
using namespace std;
int main(){
	int n,a;
	a=1;
	cout <<"For which number do you want the multiplication table?\n";
	cin >> n;
	while (a>=1&&a<=10)
		{cout << n<<" x "<< a<<"="<<n*a<<endl;
		 a++;
		}
	return 0;
	}	
	
