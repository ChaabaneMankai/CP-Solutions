#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef long long ll;

const ll INF = 4e9+5;

const int N =305;
const int MOD = 1e9+7  ;

using namespace std;

void solve(){
    ll n,q;
    cin>>n>>q;
    ll a[n];
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    for (ll i=1;i<n;i++)
        a[i]+=a[i-1];
    while (q--){
        ll x,y;
        cin>>x>>y;
        ll cnt=a[x-1]-a[x-y-1];
        if (x==y)
            cnt=a[x-1];
        cout<<cnt<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("","r",stdin);
    int t=1;
    //cin>>n>>t;
    while(t--){
            solve();
    }
    return 0;
}
