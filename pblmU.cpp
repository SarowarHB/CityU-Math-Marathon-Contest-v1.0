#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        long long int n,p,i,a[11];
        unsigned long long sum=0;
        cin>>n>>p;
        for(int q=1;q<=10;q++)
        {
            a[q]=(q*p)%10;
        }
        long long int temp=n/p;
        long long int y=temp%10;
        temp=temp/10;
        for(i=1;i<=10;i++)
        {
            sum=sum+a[i];
        }
        sum=sum*temp;

        for(i=1;i<=y;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
