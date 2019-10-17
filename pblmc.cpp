#include <iostream>
#include<bits/stdc++.h>

using namespace std;

unsigned int makePalindrome(unsigned int x)
{
  unsigned int result = x * 1000;
  result +=    x / 100;
  result +=  ((x / 10) % 10) *  10;
  result +=   (x % 10)       * 100;
  return result;
}

int main()
{
  unsigned int tests;
  cin >> tests;
  while (tests--)
  {

    unsigned int maximum;
    cin >> maximum;

    bool found = false;

    for (long long int u = maximum / 1000; u >= 100; u--)
    {
      if(found==false){

      long long int palindrome = makePalindrome(u);

      if (palindrome >= maximum)
       {
           continue;
       }


      for (unsigned int i = 100; i * i <= palindrome; i++)
        {
        if (palindrome % i == 0)
        {

          long long other = palindrome / i;
          if (other < 100 || other > 999)
            continue;

          cout << palindrome <<endl;
          found = true;
          break;
        }
      }
    }
    }

  }
  return 0;
}
