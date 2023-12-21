#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll ;
bool isprime(ll n){
	if (n==2) return true;
	if (n<2 || n%2==0) return false;
	for (ll i=3;i*i<=n;i+=2){
		if (n%i==0)
			return false;
	}
	return true;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    bool verif=true;
    for (ll i=0;i<n;i++){
        cin>>a[i];
        if (a[i]==0)
            verif=false;
    }
    if (verif){
        cout<<"YES";
        return 0;
    }
    ll i=3;
    while (i<n){
        ll k=n/i;
        ll reste=n%k;
        if (reste==0){
            for (ll j=0;j<k;j++){
                if (a[j]==1){
                    bool v=true;
                    for (ll l=0;l<i;l++){
                    if (a[j+l*k]!=1){
                        v=false;
                    }
                    }
                    if (v){
                        cout<<"YES";
                        return 0;
                    }
                }
            }
        }
        i++;
    }
    cout<<"NO";
    return 0;
}
