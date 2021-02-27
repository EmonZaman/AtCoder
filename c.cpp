
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long int power(long long  x, unsigned int y)
{
    int res = 1; // Initialize result

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // n must be even now
        y = y >> 1; // y = y/2
        x = x * x; // Change x to x^2
    }
    return res;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   long long int n;
   cin>>n;
   set<long long int>s1;
   for(long long int i=2;i<= sqrt(n)+1;i++)
   {
      // cout<<"kjhsdkjhfjksdhfskj "<<i<<endl;
       for(long long int j=2;j<=sqrt(n)+1;j++)
       {
           long long int push=power(i,j);
           if(push>n)
            break;
        //   cout<<push<<endl;
           s1.insert(push);

       }
   }
   long long int ans=s1.size();
   cout<<n-ans<<endl;
}


