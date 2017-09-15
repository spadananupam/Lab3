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
		
	cout << "The number in octal is "<<decimalToOctal(dec)<<endl;           
	        return 0; }
	

	// Function to convert decimal number to octal
	 int decimalToOctal(int dec)
	 {
	 int rem, i = 1, octalNumber = 0;
	 while (dec != 0)
	 {
	 rem = dec % 8;
	 dec /= 8;
	 octalNumber += rem * i;
	 i *= 10;
	 }
	 return octalNumber;
	 }
	

