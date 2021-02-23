
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<=n; i++)
        a[i]=0;

    while(k--)
    {
        int input;
        cin>>input;
        while(input--)
        {
            int check;
            cin>>check;
            a[check]=1;
        }

    }
    int c=0;
    for(int i=1; i<=n; i++)
    {
        if(a[i]==0)
            c++;
    }
    cout<<c<<endl;

}
