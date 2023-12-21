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

void solve(){
    ll n;
    cin>>n;
    ll k=1;
    memset(a,false,sizeof(a));
    cout<<2<<endl;
    while (k<=n){
        cout<<k<<" ";
        a[k]=true;
        k=k*2;

    }
    for (ll i=1;i<=n;i+=2){
        if (!a[i]){
            ll j=i;
            while (!a[j] && j<=n){
                cout<<j<<" ";
                a[j]=true;
                j=j*2;
                if (a[j])
                    break;
            }
        }
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

