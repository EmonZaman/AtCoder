
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{

    int n;
    cin>>n;
    ll check=INT_MAX;
    int cnt=0;
    while(n--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c-a>0)
        {
            check=min(check,b);
            cnt=1;
        }
    }
    if(cnt==1)
        cout<<check<<endl;
    else
        cout<<-1<<endl;
}

