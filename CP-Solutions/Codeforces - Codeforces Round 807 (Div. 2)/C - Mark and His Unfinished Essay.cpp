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

void solve(){
    ll n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    ll cnt[c+1][3];
    cnt[0][0]=1;
    cnt[0][1]=n;
    cnt[0][2]=n;
    for (ll i=1;i<=c;i++){
        ll l,r;
        cin>>l>>r;
        cnt[i][0]=l;
        cnt[i][1]=r;
        cnt[i][2]=cnt[i-1][2]+(r-l+1);

    }
    /*for (ll i=0;i<=c;i++){
        cout<<cnt[i][0]<<" "<<cnt[i][1]<<" "<<cnt[i][2]<<endl;
    }*/
    for (ll i=0;i<q;i++){
        ll x;
        cin>>x;
        while (x>n){
            for (ll i=0;i<=c;i++){
                if (cnt[i][2]>=x){
                    ll k=cnt[i][2]-x;
                    ll h=cnt[i][1]-k;
                    x=h;
                    //cout<<x<<endl;
                    break;
                }
            }
        }
        cout<<s[x-1]<<endl;
    }

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
