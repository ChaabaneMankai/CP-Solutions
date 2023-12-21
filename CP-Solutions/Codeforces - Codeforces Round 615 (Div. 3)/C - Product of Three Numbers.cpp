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
void printDivisors(ll n)
{
    // Vector to store half of the divisors
    vector<ll> v;
    ll k=n;
    for (ll i = 2; i <=sqrt(n) ; i++) {
        if (k % i == 0) {
                v.push_back(i);
                k=k/i;
            }
        if (v.size()==2)
            break;
    }
    if (v.size()==2){
        if (k==v[0] || k==v[1]){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<k<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }

}
void solve(){
    ll n;
    cin>>n;
    printDivisors(n);
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
   // freopen("","r",stdin);
    int t=1;
    cin>> t;
    while(t--){
            solve();
    }
    return 0;
}
