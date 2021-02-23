#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int in1,in2;
   int check=0;
    int a=0,ans,c=0;
    while(n--)
    {
       a++;
        cin>>in1>>in2;
        int fi=in1*in2;
        check=check+ fi;
       // cout<<check<<endl;
        if(check>x*100 and c==0 )
        {

            ans=a;
            c=1;


        }

    }
    if(check<=x*100)
        cout<<"-1"<<endl;
        else
            cout<<ans<<endl;

}
