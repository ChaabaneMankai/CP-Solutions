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
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
bool a[200010];
// Structure of each node of the tree


void solve(){
    double tot=0;
    ll n,t;
    double p;
    cin>>n>>p>>t;
    double dp[t+2][n+2];
    memset(dp,0,sizeof(dp));
    dp[0][0]=1;
    for (ll i=0;i<=t;i++){
        for (ll j=0;j<=n;j++){
            if (j==n){
                dp[i+1][j]+=dp[i][j];
            }
            else{
            dp[i+1][j+1]+=dp[i][j]*p;
            //cout<<i+1<<" "<<j+1<<" "<<dp[i+1][j+1]<<endl;
            dp[i+1][j]+=dp[i][j]*(1-p);
            }
        }
    }
    /*for (ll i=0;i<=t;i++){
        for (ll j=0;j<=n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/

    for (ll j=1;j<=n;j++){
        tot+=(j*dp[t][j]);
    }
    cout<<tot<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
    //cin>>t;
    while(t--){
            solve();
    }
    return 0;
}

