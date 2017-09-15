#include <iostream>
using namespace std;

int main()
{
  int num1, i, num, digit, sum;

  cout << "Enter number: ";
  cin >> num1;



  cout << "Armstrong numbers between " << "1" << " and " << num1 << " are: " << endl;
  for(i = 1; i <= num1; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}

