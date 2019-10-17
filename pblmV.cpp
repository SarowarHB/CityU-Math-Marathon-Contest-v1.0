#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    cin >> n;
    long long int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    long long int j;
    unsigned long long sum=0,k,p;
    i=0;
    j=n-1;
    while(i<j)
    {
        k=arr[i]+arr[j];
        p = k*k;
        sum = sum + p;
        i=i+1;
        j=j-1;
    }

   cout<<sum;

  return 0;
}
