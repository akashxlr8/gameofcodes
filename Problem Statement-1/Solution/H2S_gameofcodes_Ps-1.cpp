#include <iostream>
using namespace std;
#include<bits/stdc++.h>

long long gcd(long long a, long long b)
{
    if (b == 0)
        return a;
  return gcd(b, a % b);
}


long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b,k;
        cin>> n>>a>>b>>k;
        long long s;
        long long avni= n/a;
        long long anuj= n/b;
        long long none= n/(lcm(a,b));
        s= avni + anuj -2 * none;
        if(s>=k)
        cout<<"Win"<<endl;
        else
        cout<<"Lose"<<endl;
    }
	return 0;
}