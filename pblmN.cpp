#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long sum=0;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int maxx=arr[n-1];
    for(i=0;i<n;i++)
    {
        if(arr[i]!=maxx)
        {
            sum=sum+maxx-arr[i];
        }

    }
    cout<<sum;
}
