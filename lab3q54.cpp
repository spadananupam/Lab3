#include <iostream>
#include <cmath>
       using namespace std;

       int main() {
              int a, b, n;
              cout << "Perfect number tests:\n\n";
              cout << "Type in a number:\n";
              cin >> a;
              b = a;

              int c = 1, sum=0;
              while (c < a) {
                     if (a%c == 0) {
                           sum = sum + c;
                     }
                     c++;
              }
              if (sum == b)
                     cout << "That's perfect!";
              else
                     cout << "Nah";


              return 0;

       }
