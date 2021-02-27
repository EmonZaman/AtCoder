
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long bin_pow(long long base, long long power)
{
    if(power == 1)
    {
        return base;
    }
    if(power % 2 == 0)
    {
        long long t = bin_pow(base, power / 2);
        return t * t;
    }
    else
    {
        return bin_pow(base, power - 1) * base;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;
    set<long long int>s1;
    for(long long int i=2; i <= sqrt(n)+1; i++)
    {
        // cout<<"kjhsdkjhfjksdhfskj "<<i<<endl;
        for(long long int j=2; j<=sqrt(n)+1; j++)
        {
            long long int push=bin_pow(i,j);
            if(push>n)
                break;
            //   cout<<push<<endl;
            s1.insert(push);

        }
    }
    long long int ans=s1.size();
    cout<<n-ans<<endl;
}


