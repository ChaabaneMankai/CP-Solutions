#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef unsigned long long ll;

const ll INF = 4e9+5;

const int N =305;
const int MOD = 1e9+7  ;
using namespace std;
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    if (n>m){
        cout<<0<<endl;
        return;
    }
    ll tot=1;
    for (ll i=0;i<n;i++){
        for (ll j=i+1;j<n;j++){
            tot=(tot*(llabs(a[j]-a[i])%m))%m;
        }
    }
    cout<<tot<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("","r",stdin);
    int t=1;
    //cin>> t;

    while(t--){
            solve();
    }
    return 0;
}
