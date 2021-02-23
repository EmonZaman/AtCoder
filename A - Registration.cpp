#include<bits/stdc++.h>

using namespace std;


int main()
{


        string s;
        string s1;
        cin>>s;
        cin>>s1;

        for(int i=0;i<s.length();i++)
        {
           if(s[i]!=s1[i])
           {
               cout<<"No"<<endl;
               return 0;
           }
        }

cout<<"Yes"<<endl;




        return 0;


}
