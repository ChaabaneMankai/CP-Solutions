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
    ll n;
    cin>>n;
    ll a[n][n];
    for (ll i=0;i<n;i++){
        string s;
        cin>>s;
        for (ll j=0;j<n;j++){
            a[i][j]=s[j]-'0';
        }
    }
    ll tot=0;
    bool verif[n][n];
    memset(verif,false,sizeof(verif));
    bool v=false;
    for (ll i=0;i<(n+1)/2;i++){
        for (ll j=0;j<(n+1)/2;j++){
            ll cnt0=0,cnt1=0;
           // cout<<i<<" "<<j<<" , "<<j<<" "<<n-i-1<<" , "<<n-i-1<<" "<<n-j-1<<" , "<<n-j-1<<" "<<i<<endl;
            if (verif[i][j] || verif[j][n-i-1] || verif[n-i-1][n-j-1] || verif[n-j-1][i]){
                v=true;
                break;
            }
            if (a[i][j]==0)
                cnt0++;
            else
                cnt1++;
            verif[i][j]=true;
            if (a[j][n-i-1]==0)
                cnt0++;
            else
                cnt1++;
            verif[j][n-i-1]=true;
            if (a[n-i-1][n-j-1]==0)
                cnt0++;
            else
                cnt1++;
            verif[n-i-1][n-j-1]=true;
            if (a[n-j-1][i]==0)
                cnt0++;
            else
                cnt1++;
            verif[n-j-1][i]=true;
            tot+=min(cnt1,cnt0);
        }
        if (v)
            break;
    }
    cout<<tot<<endl;

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
    cin>>t;
    while(t--){
            solve();
    }
    return 0;
}

