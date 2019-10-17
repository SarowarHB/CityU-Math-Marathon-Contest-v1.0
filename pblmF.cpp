#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if(num == 2)
        return true;
    else if (num % 2 == 0)
        return false;
    for (int i = 3 ; i <= sqrt(num);i+=2)
    {
        if(num%i == 0)
            return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    int n = 1;
    vector<long> vec;
    int size = vec.size();
    while(size != 10001)
    {

        if(isPrime(++n)){
            vec.push_back(n);
           }
        size = vec.size();
    }
    for(int l = 0; l < t; l++){
        int n;
        cin >> n;
        cout<<vec[n-1]<<endl;

    }
    return 0;
}
