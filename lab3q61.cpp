#include <iostream>
#include <math.h>
		
using namespace std;
int decimalToOctal(int dec);
int main(){
	int binary,dec=0,n=0;
	cout <<"Please enter a binary number \n";
	cin>>binary;
	while (binary>0){
		dec=dec+((binary%10)*pow(2,n));
		binary=binary/10;
		n++;}	
		
	cout << "The number in decimal is "<<dec<<endl;           
	        return 0; }
	
