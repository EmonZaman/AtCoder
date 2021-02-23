#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
   cin>>k;
    string s;
    cin>>s;


   int check= s.length();
   if(check<=k)
    cout<<s<<endl;
   else
   {
        for(int i=0;i<k;i++)
    cout<<s[i];
   cout<<"..."<<endl;

   }
   return 0;






}
