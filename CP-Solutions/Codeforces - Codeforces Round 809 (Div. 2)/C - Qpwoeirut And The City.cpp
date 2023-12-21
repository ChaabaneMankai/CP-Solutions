#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define INF (ll)(1e18)

using namespace std;

const int N = 2e5+7;

ll racine;
vector<ll> adj[N];
bool vis[N];
vector<ll> h;
vector<vector<ll>> k;
void dfs(int pos){
    vis[pos]=true;
    ll cnt=0;
        for (int i=0;i<adj[pos].size();i++){
        int x=adj[pos][i];
        if (!vis[x]){
            cnt=1;
            h.push_back(x);
            dfs(x);
        }
    }
    if (cnt==0){
        k.push_back(h);
        h.clear();
    }
    return;
}
int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll h[n],dp[n];
        memset(dp,0,sizeof(dp));
        for (ll i=0;i<n;i++)
            cin>>h[i];
        ll cnt=0;
        /*if (n%2==1){
            for (ll i=1;i<n-1;i+=2){
                if (h[i]<=h[i-1]){
                    cnt+=(h[i-1]-h[i]+1);
                }
                if (h[i]<=h[i+1])
                    cnt+=(h[i+1]-h[i]+1);
            }
        }
        else{*/
            dp[0]=0;
            for (ll i=1;i<n-1;i++){
                if (h[i-1]>=h[i]){
                    dp[i]=max(h[i-1]-h[i]+1,dp[i]);
                }
                if (h[i+1]>=h[i])
                    dp[i]=max(h[i+1]-h[i]+1,dp[i]);
            }
            for (ll i=3;i<n-1;i++){
                if (i>3 && i%2==0)
                dp[i]+=min(dp[i-2],dp[i-3]);
                else
                    dp[i]+=dp[i-2];
            }
            /*for (ll i=0;i<n;i++)
                cout<<dp[i]<<" ";
            cout<<endl;*/
            if (n%2==1){
                cout<<dp[n-2]<<endl;
            }
            else{
                cout<<min(dp[n-2],dp[n-3])<<endl;
            }



    }
}
