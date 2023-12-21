#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll a[n],cnt[n];
        for (ll i=0;i<n;i++){
            cin>>a[i];
        }
        cnt[0]=1;
        ll tot=0;
        sort(a,a+n);
        if (a[0]==1){
            tot++;
            cnt[0]=0;
        }
        for (ll i=1;i<n;i++){
            cnt[i]=cnt[i-1]+1;
            if (cnt[i]==a[i]){
                tot++;
                cnt[i]=0;
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}