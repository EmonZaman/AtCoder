#include<bits/stdc++.h>
using namespace std;

int main()

{
    unsigned long long int n=100;
    unsigned long long int check;
    cin>>check;
    //int ans;

    for(int i=1;i<i+2;i++)
    {
        unsigned long long  temp=(n/100);
        n=n+temp;
        if(n>=check)
        {
            //ans=i;
            cout<<i<<endl;
            return 0;
            //cout<<"there are sum of the first
        }

    }



}

