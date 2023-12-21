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
    ll a[n];
    for (ll i=0;i<n;i++){
        cin>>a[i];
    }
    for (ll i=0;i<n;i++){
        ll k;
        cin>>k;
        string s;
        cin>>s;
        ll cntu=0,cntd=0;
        for (ll j=0;j<k;j++){
            if (s[j]=='U')
                cntu++;
            else
                cntd++;
        }
        if (cntd>cntu){
            a[i]+=(cntd-cntu);
            a[i]=a[i]%10;
            if (a[i]<0)
                a[i]+=10;
        }
        else if (cntu>cntd){
            a[i]-=(cntu-cntd);
            a[i]=a[i]%10;
            if (a[i]<0)
                a[i]+=10;
        }
    }
    for (ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

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

