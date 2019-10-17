#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t,j;

    cin>>t;
   while(t--)
    {
         unsigned long long sum1 = 0;
         unsigned long long sum2 = 0;
          unsigned long long sum3 = 0;

       cin>>n;
    for(i=1; i<=n; i++)
    {
       sum1=sum1+i;
       sum2=sum2+i*i;
    }
     sum3=sum1*sum1;
    // cout<<sum2<<" ";
     //cout<<sum3;
       cout<<sum3-sum2<<endl;
    }
 return 0;
}
