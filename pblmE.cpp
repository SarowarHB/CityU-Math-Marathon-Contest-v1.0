#include <bits/stdc++.h>
using namespace std;

 unsigned long lcm(unsigned long long n)
 {
    unsigned long long  r = 1;
    for (unsigned long long  i = 2; i <= n; i++)
      {
        if (r % i !=0)
         {
            unsigned long long x = i;
            while (x * i <= n)
               {
                   x =x*i;
               }
            r =r*x;
          }
        }
    return r;
}

int main() {
    int t;
    unsigned long long k;
    cin>>t;
    while(t--)
    {
        cin>>k;

        cout << lcm(k) <<endl;
    }
    return 0;
}
