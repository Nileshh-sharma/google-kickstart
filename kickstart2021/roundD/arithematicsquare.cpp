#include<bits/stdc++.h>
using namespace std;
 
#define BOOST ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
#define ll long long
#define test int t ; cin>>t; for(int i=0;i<t;i++)

void solve()
{
   ll a,b,c,d,e,f,g,h,ma,ans=0;
   cin>>a>>b>>c;
   cin>>d>>e;
   cin>>f>>g>>h;
   if(2*b == a+c)
     ans++; 
   if(2*g == f+h)
     ans++; 
   if(2*d == a+f)
     ans++; 
   if(2*e == h+c)
     ans++; 
   map<ll,ll> mp;
   if((a+h)%2 == 0)
     mp[(a+h)/2] ++;
   if((f+c)%2 == 0)
     mp[(c+f)/2] ++;
   if((b+g)%2 == 0)
     mp[(b+g)/2] ++;
   if((d+e)%2 == 0)
     mp[(d+e)/2] ++;
   ma = 0;
   for(auto i:mp)
    ma = max(ma,i.second);
    ans += ma;
   cout<<ans<<'\n';
}
int main()
{
  BOOST 
  test
  {
    cout << "Case #" << i + 1 << ": ";
    solve();
  }
}