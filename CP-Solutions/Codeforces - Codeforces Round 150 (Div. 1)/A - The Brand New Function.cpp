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
bool verif=true;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    f(i,0,n){
    cin>>a[i];
    }
    set<ll> h;
    set<ll> v;
    //v.pb(a[0]);
    f(i,0,n){
        set<ll> v1;
        v1.insert(a[i]);
        for (auto j:v){
            v1.insert(j|a[i]);
            h.insert(j);
           //cout<<j<<" ";
        }
        //cout<<endl;
        v=v1;
    }
    for (auto j:v)
        h.insert(j);
    for (ll i=0;i<n;i++)
        h.insert(a[i]);
    cout<<h.size()<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("","r",stdin);
    int t=1;
    //cin>>t;
    while(t--){
            solve();

    }
    return 0;
}
