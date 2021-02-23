
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     string s;
     cin>>s;
     if(n%2==1)
     {
            cout<<"No"<<endl;
            return 0;
     }
     int j=n/2;
     int check=0;
     for(int i=0;i<n/2;i++)
     {
         if(s[i]!=s[j])
         {
             check=1;
             break;
         }
         j++;



     }
     if(check==1)
        cout<<"No"<<endl;
     else
         cout<<"Yes"<<endl;




}
