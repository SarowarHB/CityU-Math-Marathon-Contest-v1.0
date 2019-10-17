#include <bits/stdc++.h>
using namespace std;

   long long int SumDivisbleBy(long long int n, long long int p)
    {
        return n*(p/n)*((p/n)+1)/2;
    }
int main()
{
    long long p,t;
    unsigned long long sum1,sum2,sum3,sum;

    cin>>t;
    while(t--)
    {
        cin>>p;
        sum1=SumDivisbleBy(3,p-1);
        sum2=SumDivisbleBy(5,p-1);
        sum3=SumDivisbleBy(15,p-1);
        sum=sum1+sum2-sum3;
        cout<<sum<<endl;

    }
 return 0;
}
