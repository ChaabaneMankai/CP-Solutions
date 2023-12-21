#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll n;
        cin>>n;
        ll a[n];
        bool verif=true;
        ll cnt=0;
        for (ll i=0;i<n;i++){
            cin>>a[i];
            if (a[i]<0)
                cnt++;
        }
        for (ll i=0;i<n;i++){
            if (i<cnt && a[i]>0)
                a[i]=-a[i];
            if (i>=cnt && a[i]<0)
                a[i]=-a[i];
        }

        for (ll i=1;i<n;i++){
            if (a[i-1]>a[i]){
                //cout<<b[i]<<" "<<a[i]<<endl;
                verif=false;
                break;
            }
        }
        if (verif)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

