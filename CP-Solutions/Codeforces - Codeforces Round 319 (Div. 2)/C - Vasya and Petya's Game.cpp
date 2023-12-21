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
    set<ll> m;
    if (n==1){
        cout<<0;
        return 0;
    }

    for (ll i=2;i<=n;i++){
        if (isprime(i)){
            ll j=i;
            //cout<<i<<endl;
            m.insert(i);
            while (i*j<=n){
                m.insert(i*j);
                j=i*j;
            }
        }
    }
   /* for (ll i=3;i<=n;i+=2){
        if (!verif[i]){
            m.push_back(i);
            for (auto j:m){
                if (j!=i){
                    verif[i*j]=true;
                }
            }
        }
    }*/
    cout<<m.size()<<endl;
    for (auto i:m)
        cout<<i<<" ";
    return 0;
}
