#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;

    cin>>x>>y;
    int l=y-1;
    int r=x-y;
    if(y==x||y==1)
    {
        cout<<3*x<<endl;
    }
    else if(r<l)
    {
        cout<<3*x+r<<endl;
    }
    else if(l<r)
    {
        cout<<3*x+l;
    }
    else if(l==r)
    {
        cout<<3*x+r<<endl;
    }



	return 0;
}

