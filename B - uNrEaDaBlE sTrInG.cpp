#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

        for(int i=0; i<s.length(); i++)
        {
            if(i%2==0)
            {
                if(s[i]>='A' and s[i]<='Z')
                {
                     cout<<"No"<<endl;
                        return 0;

                }


            }

            if(i%2==1)

                {
                    if(s[i]>='a' and s[i]<='z')
                    {
                         cout<<"No"<<endl;
                        return 0;

                    }


                }


        }
         cout<<"Yes"<<endl;


}

