#include <iostream>
using namespace std;
int main()
{
  unsigned int tests;
  cin >> tests;
  while (tests--)
  {
    unsigned long long last;
    cin >> last;

    unsigned long long sum = 0;

    unsigned long long a = 1;
    unsigned long long b = 2;


    while (b <= last)
    {

      if (b % 2 == 0)
       {

          sum += b;
       }


     unsigned long long next = a + b;
      a = b;
      b = next;
    }

    cout << sum << std::endl;
  }
  return 0;
}
