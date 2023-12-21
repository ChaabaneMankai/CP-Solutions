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
        vector<ll> pos[n+1];
        ll cnt[n+1];
        ll c[n+1];
        for (ll i=1;i<=n;i++){
            cnt[i]=0;
            cin>>c[i];
            pos[c[i]].push_back(i);
        }
        for (ll i=1;i<=n;i++){
            for (ll j=1;j<pos[i].size();j++){
                if ((pos[i][j]-pos[i][j-1])%2==1)
                    cnt[i]++;
            }
            /*for (ll j=0;j<pos[i].size();j++)
                cout<<pos[i][j]<<" ";
            cout<<endl;*/
            if (pos[i].size()!=0){
                cnt[i]++;
            }

        }
        if (n==1){
            cout<<1<<endl;
        }
        else{        for (ll i=1;i<=n;i++)
            cout<<cnt[i]<<" ";
        cout<<endl;
        }


    }
}
