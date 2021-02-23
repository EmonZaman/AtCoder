
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int sum=0;
  for(int i =1;i<i+2;i++)
  {
      sum=n*i;
      if(sum>=a && sum<=b)
      {
          cout<<"OK"<<endl;
          break;
      }
      if(sum>b)
      {
          cout<<"NG"<<endl;
          break;
      }

  }
  return 0;
}

