#include <bits/stdc++.h>

#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second

typedef long long ll;

const ll INF = 4e9+5;

const int N =2*1e5+7;;
const int MOD = 1e9+7  ;
using namespace std;
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;







//tri binaire (du bas vers le haut)
// complexité log2(n)
//const ll N=1e9+7;
int tree[4*N];
ll a[N];
int mrg(int x,int y){
    //modifier cette fonction seulement
    return max(x,y);
}
ll n,m;
void build(int id=0,int ns=0,int ne=m-1){
    if (ns==ne){
        tree[id]=a[ns];
        return ;
    }
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    build(l,ns,md);
    build(r,md+1,ne);
    tree[id]=mrg(tree[l],tree[r]);
}

int query(int qs,int qe,int id=0,int ns=0,int ne=m-1){
    //cout<<ns<<" "<<ne<<endl;
    if (ns>qe || qs>ne)
        return 0; //infinity
    if (qs<=ns && qe>=ne)
        return tree[id];
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    return mrg(query(qs,qe,l,ns,md),query(qs,qe,r,md+1,ne));
}


// tout ce qu'on doit faire est
//cout<<query(left,right);

//changer une valeur
void upd(int pos,int val,int id=0,int ns=0,int ne=n-1){
    if (ns>pos || pos>ne)
        return ;
    if (ns==ne){
        tree[id]=val;
        return ;
    }
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    upd(pos,val,l,ns,md);
    upd(pos,val,r,md+1,ne);
    tree[id]=mrg(tree[l],tree[r]);
}











void solve(){
    cin>>n>>m;
   for (ll i=1;i<=m;i++)
    cin>>a[i];
   build();
   //for (ll i=0;i<=100;i++)
    //cout<<tree[i]<<" ";
    ll q;
   cin>>q;
   //cout<<q<<endl;
   for (ll i=0;i<q;i++){
        ll x1,y1,x2,y2,k;
        cin>>x1>>y1>>x2>>y2>>k;
        if (y1>y2){
            ll e1=x1,e2=y1;
            x1=x2;
            y1=y2;
            x2=e1;
            y2=e2;
        }
       // cout<<y1<<" "<<y2<<endl;
        ll z=query(y1,y2);
        //cout<<z<<endl;
        bool verif1=false,verif2=false,verif3=false,verif4=false;
        if ((x2-x1)%k==0)
            verif3=true;
        if ((y2-y1)%k==0)
            verif4=true;
        ll h1=z-x1+1,h2=z-x2+1;
        if (x1>z || ((h1)%k==0 || ((h1%k)+n-z-1>=k)) )
            verif1=true;
        if (x2>z || ((h2)%k==0 || ((h2%k)+n-z-1>=k)) )
            verif2=true;
       // cout<<verif1<<" "<<verif2<<" "<<verif3<<" "<<verif4<<endl;
       if (z==n){
        cout<<"NO"<<endl;
        continue;
       }
        if (verif1 && verif2 && verif3 && verif4){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            continue;
        }


   }
   }

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
   // cin>>t;
    while(t--){
            solve();
    }
return 0;
}
