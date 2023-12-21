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
    ll n;
    cin>>n;
    ll k=n%2020;
    //cout<<k<<endl;
    if (k*2021<=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int t=1;
    cin>> t;
    while(t--){
            solve();
    }
    return 0;
}
