# include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,m1,n,n1,k;
    cin>>m>>m1>>n>>n1>>k;

   n=(n*60)+n1;
   n=n-k;
   m=(m*60)+m1;

 cout<<n-m<<endl;
}
