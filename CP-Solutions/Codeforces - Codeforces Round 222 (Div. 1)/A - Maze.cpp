#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 ll n,m,k;
const int N=1000;
bool vis[N][N];
char a[N][N];
bool isValid(int x,int y)
{
	if (x<0 || x>=n || y<0 || y>=m)
		return false;
	if (vis[x][y])
		return false;
	return true;
}
ll cnt,cnt2;
void dfs(int i,int j){
    vis[i][j]=true;
    cnt++;
    if (cnt>cnt2-k){
            a[i][j]='X';
        }
    if (isValid(i+1,j) &&  a[i+1][j]=='.' && !vis[i+1][j]){

        dfs(i+1,j);
    }
    if (isValid(i,j+1) &&  a[i][j+1]=='.' && !vis[i][j+1]){

        dfs(i,j+1);
    }
    if (isValid(i-1,j) &&  a[i-1][j]=='.' && !vis[i-1][j]){
        dfs(i-1,j);
    }
    if (isValid(i,j-1) &&  a[i][j-1]=='.' && !vis[i][j-1]){
        dfs(i,j-1);
    }
    return;
}
int main()
{

    cin>>n>>m>>k;
    cnt=0;
    cnt2=0;
    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            cin>>a[i][j];
            if (a[i][j]=='.')
                cnt2++;
        }
    }
    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++){
            if (a[i][j]=='.' && !vis[i][j]){
                dfs(i,j);
            }
        }
    }
    for (ll i=0;i<n;i++){
        for (ll j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    //cout<<cnt<<" "<<n-k<<endl;
    return 0;
}
