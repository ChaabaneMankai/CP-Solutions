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
    ll x;
    cin>>x;
    ll m=0;
    if (x==1){
        cout<<3<<endl;
        return;
    }
    for (ll i=1;i<=30;i++){
        if (pow(2,i)==x){
            cout<<x+1<<endl;
            return;
        }
        if (x & 1<<i)
            m=max(m,i);
    }
    for (ll i=0;i<=30;i++){
        if (x & (1<<i)){
            cout<<(1<<i)<<endl;
            return;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("t.txt","r",stdin);
    int t=1;
    cin>> t;
    while(t--){
            solve();
    }
    return 0;
}
