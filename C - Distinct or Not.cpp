
#include<bits/stdc++.h>
using namespace std;
int main()
{
 set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        s.insert(in);

    }
    if(s.size()==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
