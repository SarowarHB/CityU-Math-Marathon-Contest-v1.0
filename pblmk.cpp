#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long int n,i;

    long long int dm,k,l,m;
       cin>>n;
       k=(pow(-1,n))*n;
       l=(pow(-1,n+1));
       m=n/2;
       dm =k+l*m;

      cout<<dm<<endl;

  return 0;
}
