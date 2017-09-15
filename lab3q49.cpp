#include <iostream>
#include <cmath>
using namespace std;

int main() {
       int a=2, c, d, n, sum=0;
       cout << "Prime Suspects\n\n";
       cout << "Enter n:\n";
       cin >> n;

       if (n<=0)
              cout << "Invalid input";
       //Checking for being prime for every value of a upto n.
       else {
              while (a <= n) {
                     //Initializing two numbers to be equal and prime.
                     c = 2;
                     d = 2;

                     //c and d remain increase at the same rate only if the code under the if statement is executed everytime. i.e., the number
                     // has to be non-divisible by all natural numbers c less than itself.
                     while (c < a) {
                           if (a%c != 0)
                                  d++;
                           c++;
                     }

                     if (c == d)
                           sum = sum + a;
                     a++;
              }
       }
       cout << "The sum is: " << sum << endl;

       return 0;
}
