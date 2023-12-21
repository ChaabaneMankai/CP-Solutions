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
set<ll> h;
void solve(){
    int a,b;
   ll tot=0;
   cin>>a>>b;
   bool verif=false;
    if (b==a){
     cout<<2<<endl;
     return;

}
   if(b==1)
 {
     b++;
     tot++;
     verif=true;
 }
ll k=a;
while (k>0){
    k=k/b;
    tot++;
}
//cout<<"tot"<<tot<<endl;
if(b>a){
    //cout<<"yes";
    cout<<1<<endl;
    return;}

   for (int i=b;i<=b+5;i++)
   {
       ll cnt=0;
       if (verif)
        cnt++;
       ll c=a;
       while(c>0){
       cnt++;
       c=c/i;
       }
       //cout<<"cnt"<<cnt<<endl;
       if (cnt+i-b<tot)
       tot=cnt+i-b;

   }
   cout<<tot<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
    //freopen("","r",stdin);
    int t=1;
    cin>> t;
    while(t--){
            solve();
    }
    return 0;
}
