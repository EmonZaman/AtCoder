#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int in1,in2;
    float check=0;
    int a=0;
    while(n--)
    {
       a++;
        cin>>in1>>in2;
        float add=(float)in2/100;
        cout<<add<<endl;
        float fi=(float) add* in1;
        cout<<fi<<endl;
        check=check+ fi;
       cout<<check<<endl;
        if(check>x )
        {
            cout<<a<<endl;
            break;

        }

    }
    if(check<=x)
        cout<<"-1"<<endl;

}


