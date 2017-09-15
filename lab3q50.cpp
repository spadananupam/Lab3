#include <iostream>
using namespace std;
int main(){
	int num,n,b,c;
	n=2;
	cout << "Please enter a number \n";
	cin >> num;
	cout << "The prime factors are\n"; 
	while (n<=num){b=2;
		
	if (num%n==0)//if n is a factor
	{//check if n is prime
	while (b<=n){if ((n%b!=0)&&(b!=n)){
		
		b++;
	}
		else if (b==n){cout << n<<" ";
		b++;}
		else {break;}
	}
		
	}
	n++;
	}
	cout <<endl;
	return 0;
}
