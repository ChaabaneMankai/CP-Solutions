#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll p=0,imp=0;
    for (ll i=0;i<n;i++){
        cin>>a[i];
        if (a[i]%2==0)
            p++;
        else
            imp++;
    }
    cout<<min(p,imp);
    return 0;
}
