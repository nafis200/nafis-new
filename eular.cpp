#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int i,n;
  long long int ans=0;
  while(cin>>n)
  {
    ans=n;
    for(i=2;i<=n;i++)
    {
      if(n%i==0)
      while(n%i==0)
      {
        n=n/i;
      }
      ans*=(i-1);
      ans/=i;
    }
    if(n>1)
    {
        ans*=(n-1);
        ans=ans/n;
    }
    cout<<ans<<endl;
  }
}
