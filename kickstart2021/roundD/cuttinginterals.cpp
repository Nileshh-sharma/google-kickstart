#include<bits/stdc++.h>
using namespace std;
 
#define     fast()              ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define     ll                  long long
#define     F                   first
#define     S                   second
#define     pb                  push_back
// Solution Function
void solution(long long compte)
{
    long long  n,c;
    cin>>n>>c;
    map<long long, long long> arr;
    for(long long i=0; i<n; i++) 
    {
        long long s,e; 
        cin>>s>>e;
        if ((e-s)>=2) 
        {
            arr[s+1] += 1;
            arr[e] -= 1;
            if (arr[s+1]==0)
                arr.erase(s+1);
            if (arr[e]==0)
                arr.erase(e);
        }
    }
    vector<pair<long long, long long>> check;
    long long ck = 0ll;
    long long left = (*arr.begin()).F;
    for(auto m : arr) 
    {
        if((ck>0) && (m.F-left) > 0) 
            check.pb({ck, (m.F-left)});
        left = m.F;
        ck += m.S;
    }
    sort(check.rbegin(), check.rend());
    long long res = n;
    for (auto m : check) 
    {
        long long tp = min(c, m.S);
        c = c-tp;
        res=res+(m.F*tp);
    }   
    cout<<"Case #"<<compte<<":"<<" "<<res<<"\n";
}
// Driver Function
int main()
{
    fast();
    long long compte = 0;
    int t;
    cin>>t;
    while(t--)
    {
        compte++;
        solution(compte); 
    }
    return 0;
}