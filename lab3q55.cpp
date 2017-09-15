#include <iostream>
#include <cmath>
       using namespace std;

       int main() {
              int a=1, b, n;
              cout << "List of perfect numbers:\n\n";
              cout << "Type n:\n";
              cin >> n;

              while (a <= n) {
                     b = a;
                     int c = 1, sum = 0;
                     while (c < a) {
                           if (a%c == 0) {
                                  sum = sum + c;
                           }
                           c++;
                     }
                     if (sum == b)
                           cout << b << ", ";
                     a++;

              }


              return 0;

       }
