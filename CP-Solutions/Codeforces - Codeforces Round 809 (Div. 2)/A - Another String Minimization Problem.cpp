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
        ll n,m;
        cin>>n>>m;
        ll a[n];
        string s="";
        for (ll i=0;i<m;i++)
            s+='B';
        for (ll i=0;i<n;i++){
            cin>>a[i];
            if (a[i]>m-a[i]+1){
                if (s[m-a[i]]=='B'){
                    s[m-a[i]]='A';
                }
                else{
                    s[a[i]-1]='A';
                }
            }
            else{
                if (s[a[i]-1]=='B')
                    s[a[i]-1]='A';
                else
                    s[m-a[i]]='A';
            }
        }
        cout<<s<<endl;


    }
}
