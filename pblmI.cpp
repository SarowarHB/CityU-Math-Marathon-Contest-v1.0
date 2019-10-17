#include <bits/stdc++.h>
using namespace std;
int main()
{
  unsigned int t;
  cin >> t;
  while (t--)
  {

    unsigned int l;

    unsigned int k;

    string n;
    cin >> l >> k >> n;

    unsigned long long maxx = 0;

    for (int i=0;i+k<l;i++)
    {
      unsigned long long current = 1;

      for (unsigned int j = 0;j<k; j++)
       {

        current *= n[i + j] - '0';
       }


      if (maxx < current)
       {

       maxx = current;
       }
    }

   cout << maxx <<endl;
  }
  return 0;
}
