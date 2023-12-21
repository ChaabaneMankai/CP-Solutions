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
    set<string> h;
    string a[n];
    for (ll i=0;i<n;i++){
        string s;
        cin>>s;
        h.insert(s);
        a[i]=s;
    }
    ll res[n];
    memset(res,0,sizeof(res));
    for (ll i=0;i<n;i++){
        for (ll j=0;j<a[i].size()-1;j++){
            string s2=a[i].substr(0,j+1),s3=a[i].substr(j+1,a[i].size());
            //cout<<s2<<" "<<s3<<endl;
            if (h.find(s2)!=h.end() && h.find(s3)!=h.end()){
                res[i]=1;
                break;
            }
        }
    }
    for (ll i=0;i<n;i++)
        cout<<res[i];
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

