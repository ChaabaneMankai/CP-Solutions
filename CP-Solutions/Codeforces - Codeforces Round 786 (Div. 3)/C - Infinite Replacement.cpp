#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1;
        cin>>s2;
        ll n=s1.size();
        bool verif=true;
        ll cnt=0;
        for (ll i=0;i<s2.size();i++){
            if (s2[i]=='a'){
                cnt++;
            }
        }
        if (cnt==s2.size() && cnt==1){
            cout<<1<<endl;
        }
        else if ((cnt>0 && cnt<s2.size()) || (cnt>1 && cnt==s2.size())){
            cout<<-1<<endl;
        }

        else{
            ll k=pow(2,n);
            cout<<k<<endl;
        }
    }
    return 0;
}
