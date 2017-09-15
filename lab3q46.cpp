#include<iostream>
using namespace std;
 
int main(){
int a,b,c;
cout <<"Please enter the two numbers for which you want to get the LCM \n";
cin >>a>>b;

if (a>=b){
c=a;
while (a>=b){
	if (c%a==0&&c%b==0){break;}
	else {c++;}
}}
else {c= b;
while (b>a){
	if (c%a==0&&c%b==0){break;}
	else {c++;}
}
cout << "The LCM of "<<a<<" and "<<b<<" is "<< c<<endl;
return 0;
}}




