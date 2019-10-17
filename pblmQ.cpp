#include <bits/stdc++.h>
using namespace std;


string palindrome(string n)
{
    string res = n;


    for (int j = n.length() - 1; j >= 0; --j)
        res += n[j];

    return res;
}


int main()
{
    string n ;
    cin>>n;
    cout << palindrome(n);
    return 0;
}
