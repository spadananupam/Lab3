#include <iostream>
using namespace std;
int main(){
int a;  
        cout << "Please enter a number\n"<< endl;
        cin >> a;
        if (a%55==0){cout << "The number is divisible by both 5 and 11\n";}
        else if (a%5==0){cout << "The number is only divisible by 5\n";}
        else if (a%11==0){cout << "The number is only divisible by 11\n";}
        else {cout << "It is not divisible by any of them";}
        return 0;
}
