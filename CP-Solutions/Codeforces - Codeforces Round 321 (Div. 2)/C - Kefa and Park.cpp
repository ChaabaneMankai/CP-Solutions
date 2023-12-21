#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll ;
ll n,m;
ll a[100005];
ll tot;
bool vis[100005];
vector<ll> adj[100005];
void dfs(ll x,ll cnt){
    ll h;
    if (a[x-1]==1)
        cnt++;
    else
        cnt=0;
    if (cnt>m)
        return;
    vis[x]=true;
    bool verif=true;
    for (int i=0;i<adj[x].size();i++){
        int pos=adj[x][i];
        if (!vis[pos]){
            verif=false;
            dfs(pos,cnt);
        }
    }
    if (verif){
        tot++;
        //cout<<x<<endl;
        }
    return;
}
int main()
{
    memset(vis,false,sizeof(vis));
    cin>>n>>m;
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    tot=0;
    for (ll i=0;i<n-1;i++){
        ll x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,0);
    cout<<tot<<endl;
    return 0;
}
