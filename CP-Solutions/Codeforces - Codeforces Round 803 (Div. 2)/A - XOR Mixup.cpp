#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef unsigned long long ll;
//typedef pair<pair<ll,ll>,ll> coord;
const ll INF = 4e9+5;

const int N =305;
const int MOD = 1e15+7  ;

using namespace std;
bool verif=true;
set<ll> h;
vector<ll> subarr;
double pi=3.14159265358979323846264338327950288419716939937510;
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for (ll i=0;i<n;i++)
        cin>>a[i];
    for (ll i=0;i<n;i++){
        ll cnt=-1;
        for (ll j=0;j<n;j++){
            if (cnt==-1 && i!=j)
            cnt=a[j];
            else if (i!=j)
                cnt=cnt^a[j];
        }
        if (cnt==a[i]){
            cout<<cnt<<endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("baklava.in","r",stdin);
    ll t=1;
    cin>>t;
    while(t--){
            solve();
    }
    return 0;
}
