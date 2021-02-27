#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    int n,s,d,x,y;
    cin >> n>> s>> d;
    string ans="No";
    for(int i=0; i<n; i++)
    {
        cin >> x>> y;
        if(x<s&&y>d)
        {
            ans = "Yes";
            break;
        }
    }


    cout << ans << endl;
}
