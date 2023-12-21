#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--){
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if (x>a){
            c-=x-a;
        }
        if (y>b)
            c-=y-b;
        if (c>=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
