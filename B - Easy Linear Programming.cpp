#include<bits/stdc++.h>

using namespace std;


int main()
{

     int a,b,c,d;
      cin>>a>>b>>c>>d;

      int r=d-a;
      int sum=0;
      if(r>0)
        sum=a;
      else
      {
           sum=d;
           cout<<sum<<endl;
           return 0;
      }

      r=a+b;

      r=d-r;

      if(r>0)
        sum=sum-r;
      cout<<sum<<endl;






        return 0;


}
