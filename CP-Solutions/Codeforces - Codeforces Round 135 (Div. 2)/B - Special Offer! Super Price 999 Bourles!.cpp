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
    ll p,d;
    string ch;
    cin>>ch>>d;
    ll r=10;
    ll rl=2;
    p=stoll(ch);
    ll res=p;
    ll cnt=0;
    for (ll i=ch.size()-1;i>=0;i--){
        if (ch[i]=='9')
            cnt++;
        else
            break;
    }
    while (rl<=ch.size()){
        ll k=p%r+1;
        if (k>d || k>p){
            break;
        }
        if (rl-1>cnt)
            res=p-k;
        rl++;
        r=pow(10,rl-1);
       // cout<<rl<<" "<<r<<" "<<res<<endl;
    }
    cout<<res<<endl;


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

