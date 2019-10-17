#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    unsigned long long int x=(k*l)/nl;
    unsigned long long int y=c*d;
    unsigned long long int z=p/np;
    unsigned long long int minn=(x<y)?(x<z?x:z):(y<z)?y:z;
    unsigned long long s = minn/n;
    cout<<s;
	return 0;
}
