#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int check=s.length()/2;
    int c=s.length()-1;
    int ans=0;
    for(int i=0;i<check;i++)
    {
        if(s[i]!=s[c])
            ans++;

            c--;



    }
    cout<<ans<<endl;

    return 0;

}






