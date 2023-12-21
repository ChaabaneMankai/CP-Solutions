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
    string s;
    cin>>s;
    ll o=0,c=0,q=0;
    for (ll i=0;i<s.size();i++){
        if (s[i]=='(')
                o++;
        else if (s[i]==')')
            c++;
        else
            q++;
    }
    ll ness=s.size()/2-o;
    ll start=-1,endd=-1;
   // cout<<o<<" "<<c<<" "<<q<<endl;
    //cout<<ness<<endl;
    string s2="";
    for (ll i=0;i<s.size();i++){
        if (s[i]=='?' && ness>0){
            s2+="(";
            ness--;}
        else if (s[i]=='?'){
            s2+=")";
            //cout<<i<<" "<<endd<<endl;
            if (endd==-1){
                //cout<<"yes";
                endd=i;
            }
        }
        else{
            s2+=s[i];
        }
        if (ness==0 && start==-1){
            start=i;
        }
    }
   // cout<<start<<" "<<endd<<" "<<s2<<endl;
   if (q<=1){
    cout<<"YES"<<endl;
   }
   else{
        if (start!=-1)
        s2[start]=')';
    if (endd!=-1)
        s2[endd]='(';
    //cout<<s2<<endl;
    ll cnt[s2.size()][2];
    if (s2[0]=='(')
            cnt[0][0]=1;
    else
        cnt[0][0]=0;
    if (s2[0]==')'){
        cout<<"YES"<<endl;
        return;
    }
    else
        cnt[0][1]=0;
    for (ll i=1;i<s2.size();i++){
        if (s2[i]=='(')
                cnt[i][0]=cnt[i-1][0]+1;
        else{
            cnt[i][0]=cnt[i-1][0];
        }
        if (s2[i]==')')
                cnt[i][1]=cnt[i-1][1]+1;
        else{
            cnt[i][1]=cnt[i-1][1];
        }
        if (cnt[i][1]>cnt[i][0]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;

   }

   }

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
    cin>>t;
    while(t--){
            solve();
    }
return 0;
}
