#include <iostream>
#include <cmath>
       using namespace std;

       int g, a, c, sum;

       int fact() {
              int b = 1;
              c = 1;

              while (c <= g) {
                     b = c*b;
                     c++;
              }
                     return(b);
       }

       int main() {
              cout << "Strong number test:\n\n";
              cout << "Enter a number:\n";
              cin >> a;
              int original = a;

              sum = 0;
              while (a > 0) {
                     g = a % 10;
                     sum = sum + fact();
                     a = a / 10;
              }

              if (original == sum)
                     cout << "That's a strong number.";
              else
                     cout << "That's not a strong number...";


              return 0;

       }
