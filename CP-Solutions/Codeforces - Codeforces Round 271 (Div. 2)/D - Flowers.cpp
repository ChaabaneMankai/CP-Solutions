#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
ll mul(const ll& a, const ll& b){ return 1ll*a*b%MOD; } //
ll add(const ll& a, const ll& b){ return (a+b>=MOD)?a+b-MOD:a+b; }
ll sub(const ll& a, const ll& b){ return (a-b<0)?a-b+MOD:a-b; }
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll cnt[100005];
    ll n,k;
    cin>>n>>k;
    std::fill_n(cnt,k,1);
    cnt[k]=2;
    cnt[0]=0;
    for (ll i=k+1;i<=100001;i++){
        cnt[i]=add(cnt[i-1],cnt[i-k]);
    }
    for (ll i=2;i<=100001;i++){
        cnt[i]=add(cnt[i],cnt[i-1]);
    }
    //for (ll i=0;i<=1000;i++)
      //  cout<<cnt[i]<<" ";
    while (n--){
        ll x,y;
        cin>>x>>y;
        ll k=sub(cnt[y],cnt[x-1]);
        cout<<k<<endl;
    }
    return 0;
}
