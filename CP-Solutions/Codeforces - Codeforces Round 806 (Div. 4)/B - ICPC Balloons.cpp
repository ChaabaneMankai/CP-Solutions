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
    string s;
    cin>>s;
    bool a[26];
    memset(a,false,sizeof(a));
    ll tot=0;
    for (ll i=0;i<s.size();i++){
        a[s[i]-'A']=true;
        tot++;
    }
    for (ll i=0;i<26;i++){
        if (a[i])
            tot++;
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

