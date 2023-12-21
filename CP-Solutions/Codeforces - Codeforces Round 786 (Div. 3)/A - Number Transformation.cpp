#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll a=1,b=1;
        ll h2=y%x;
        ll h=y/x;
        if (h2!=0){
            cout<<0<<" "<<0<<endl;
        }
        else{
        ll a=0,b=0;
        bool verif=false;
        for (ll i=1;i<=100;i++){
            if (verif)
            break;
                for (ll j=1;j<=100;j++){
                if (pow(i,j)==h){
                    //cout<<"yes"<<endl;
                    a=j;
                    b=i;
                    verif=true;
                }
                if (pow(i,j)>h)
                    break;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    }
    return 0;
}
