#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        ll beg=0,en=s.size()-1;
        for (ll i=0;i<s.size();i++){
            if (s[i]=='1')
                beg=i;

        }
        for (ll i=s.size()-1;i>=0;i--){
            if (s[i]=='0')
                en=i;
        }
        cout<<en-beg+1<<endl;
    }
    return 0;
}
