# include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
  //  cout<<s<<endl;
    int   n=s.length();
    if(s[0]=='?')
    {
        if(s[1]=='?')
        {
            s[0]='P';
            s[1]='D';
        }
        else
        {
            if(s[1]=='D')
                s[0]='P';
            else
                s[0]='D';
        }
    }

    for(int i=1; i<n; i++)
    {
        if(s[i]=='?')
        {
            if(s[i-1]=='P')
                s[i]='D';
            else
            {
                if(s[i+1]=='D' || s[i+1]=='?')
                    s[i]='P';

                else
                    s[i]='D';

            }
        }
      //  cout<<s<<endl;
    }
    cout<<s<<endl;

}
