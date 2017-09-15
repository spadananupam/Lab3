#include <iostream>
using namespace std;
int main(){
	int num,d,pro;
	cout << "Please enter a number \n";
	cin >>num;
	
	pro=1;
	for (d=num;d>=2;d=d-1){
	        pro=pro*d;
		
	}
	cout <<num<<" factorial is "<< pro<<endl;
return 0;
}
