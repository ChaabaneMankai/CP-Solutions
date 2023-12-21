#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll ;

ll n,m;
ll a[200000];
int N=1e5;
int tree[400000];
int mrg(int x,int y,ll verif){
    if (verif==0)
    return x^y;
    else
        return x|y;
}

void build(int id=0,int ns=0,int ne=n-1,ll verif=0){
    if (ns==ne){
        tree[id]=a[ns];
        return ;
    }
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    build(l,ns,md,(verif+1)%2);
    build(r,md+1,ne,(verif+1)%2);
    tree[id]=mrg(tree[l],tree[r],verif);
}

int query(int qs,int qe,int id=0,int ns=0,int ne=n-1, ll verif=0){
    if (ns>qe || qs>ne)
        return 1e7; //infinity
    if (qs<=ns && qe>=ne)
        return tree[id];
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    return mrg(query(qs,qe,l,ns,md,(verif+1)%2),query(qs,qe,r,md+1,ne,(verif+1)%2),verif);
}



//changer une valeur
void upd(int pos,int val,int id=0,int ns=0,int ne=n-1,ll verif=0){
    if (ns>pos || pos>ne)
        return ;
    if (ns==ne){
        tree[id]=val;
        return ;
    }
    int l=2*id+1;
    int r=l+1;
    int md=ns+(ne-ns)/2;
    upd(pos,val,l,ns,md,(verif+1)%2);
    upd(pos,val,r,md+1,ne,(verif+1)%2);
    tree[id]=mrg(tree[l],tree[r],verif);
}


int main()
{
    ll k;
    cin>>k>>m;
    n=pow(2,k);
    for (ll i=0;i<n;i++)
        cin>>a[i];
    if (k%2==0)
        build(0,0,n-1,0);
    else
        build(0,0,n-1,1);
    while (m--){
        ll x,y;
        cin>>x>>y;
        upd(x-1,y,0,0,n-1,k%2);
        /*for (ll i=0;i<=15;i++){
            cout<<tree[i]<<" ";
        }*/
        cout<<tree[0]<<endl;
    }
    return 0;
}
