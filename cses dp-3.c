#include<algorithm>
#include <bits/stdc++.h>
#include<utility>

#define endl "\n"
#define F first
#define S second
#define mod 1000000007
#define ll long long int
#define ull unsigned long long int
#define fr(i,n) for(ll i=0;i<n;i++)
#define fr1(i,n) for(ll i=0;i<=n;i++)
#define fr2(i,n) for(ll i=1;i<=n;i++)
#define fin(v,n) find(v.begin(),v.end(),n)
#define pb(n) push_back(n);
#define aut std::vector<ll>::iterator
#define vsort(v) sort(v.begin(),v.end())
#define asort(a,n) sort(a,a+n)
#define ssort(s)  sort(s.begin(),s.end())
#define rssort(s) sort(s.begin(),s.end(),greater<char>())
#define lg(m,n) log(m)/log(n)
#define si(s) stoi(s)
#define is(n) to_string(n)
#define ve(v,n) v.erase(v.begin()+n)
#define pv(v)   for(auto it=v.begin();it!= v.end();it++){cout << *it  << endl;}
#define shit ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ks(n) cout << "Case #" << n+1 <<": "
#define low(v,n) lower_bound(v.begin(),v.end(), n);
#define upp(v,n) upper_bound(v.begin(),v.end(), n);
#define test ll t; cin >> t; while(t--)
#define maxn 101

using namespace std;



int main(){

      ll n,k; cin >> n >> k;
      ll a[n]; ll m=mod;
      fr(i,n){
      cin >> a[i];
      m= min(a[i],m);
      }

      ll dp[max(m,k)+1];
      for(int i=1;i<m;i++){
        dp[i] = 0;
      }
      dp[0] =1;
      for(int i=m;i<=k;i++){
            dp[i] =0;
        fr(j,n){
        if(i -a[j]>= 0){
            dp[i] = (dp[i]+dp[i-a[j]])%mod;
        }
        }
      }
      cout << dp[k]%mod;
}

