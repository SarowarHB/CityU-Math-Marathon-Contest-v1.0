#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
     int arr[5];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }

     sort(arr,arr+4);
      a=abs(arr[3]-arr[0]);
       b=abs(a-arr[2]);
      c=abs(a-arr[1]);
     cout<<a<<" "<<b<<" "<<c<<endl;


	return 0;
}


