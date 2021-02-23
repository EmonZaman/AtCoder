#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,base;
    cin>>n>>base;
    int digit= (int)(floor( log(n) /  log(base)) + 1);
    cout<<digit<<endl;
    return 0;


}

