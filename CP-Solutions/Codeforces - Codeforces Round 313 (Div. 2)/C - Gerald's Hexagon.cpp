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
    ll x1,x2,x3,x4,x5,x6;
    cin>>x1>>x2>>x3>>x4>>x5>>x6;
    ll k1=x1+x2,k2=x4+x5;
    ll tot=0;
    ll cnt=0;
    cnt=x6+x6+1;
    bool v1=false;
    bool v2=false;
    for (ll i=0;i<k1;i++){
        //cout<<cnt<<endl;
        tot+=cnt;
        x1--;
        x5--;
        if (x1>0 && !v1){
            cnt++;
        }
        else if (x1>0 && v1)
            cnt--;
        if (x5>0 && !v2)
            cnt++;
        else if (x5>0 && v2)
            cnt--;
        if (x1==0){
            x1=x2;
            v1=true;
        }
        if (x5==0){
            x5=x4;
            v2=true;}

    }
    cout<<tot<<endl;

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
