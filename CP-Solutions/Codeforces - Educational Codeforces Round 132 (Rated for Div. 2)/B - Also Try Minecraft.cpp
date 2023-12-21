#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef long long ll;

const ll INF = 4e9+5;

const int N =2*1e5+7;;
const int MOD = 1e9+7  ;
using namespace std;
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
void solve(){
    ll n,m;
    cin>>n>>m;
    ll h[n+1], cnt[n+2][2];
    h[0]=0;
    for (ll i=1;i<=n;i++){
        cin>>h[i];
    }
    cnt[1][0]=0;
    cnt[n][1]=0;
    for (ll i=2;i<=n;i++){
        if (h[i]<h[i-1]){
            cnt[i][0]=cnt[i-1][0]+h[i-1]-h[i];
        }
        else{
            cnt[i][0]=cnt[i-1][0];
        }
    }
    for (ll i=n-1;i>=1;i--){
        if (h[i]<h[i+1]){
            cnt[i][1]=cnt[i+1][1]+h[i+1]-h[i];
        }
        else{
            cnt[i][1]=cnt[i+1][1];
        }
    }
    while (m--){
        ll s,p;
        cin>>s>>p;
        if (s<p){
            cout<<cnt[p][0]-cnt[s][0]<<endl;
        }
        else if (s>p){
            cout<<cnt[p][1]-cnt[s][1]<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
   /* for (ll i=0;i<=n;i++){
        cout<<cnt[i][0]<<" ";
    }
    cout<<endl;
    for (ll i=0;i<=n;i++){
        cout<<cnt[i][1]<<" ";
    }
    cout<<endl;*/


}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
   // cin>>t;
    while(t--){
            solve();
    }
return 0;
}
