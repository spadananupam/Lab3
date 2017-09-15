#include<iostream>
using namespace std;
 
int main()
{
    int a, number, temp = 1,hcf;
 
    cout << "Enter the numbers to determine the HCF : " << endl;
    cin >> number>>a;
    
if (number<=a){
    while (temp <= number)
    {
        if ((number % temp)==0&&(a%temp==0))
        hcf=temp;    
 
        temp++;
    }
    }
else { while (temp <= a)
    {
        if ((number % temp)==0&&(a%temp==0))
        hcf=temp;    
 
        temp++;
    }}
cout << "The HCF of the numbers is "<< hcf<<endl;
return 0;    
}
