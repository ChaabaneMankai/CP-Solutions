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
vector<ll> h;
ll cnt[39];
string s;
void convertToTernary(ll N)
{
	// Base case
	if (N == 0)
		return;

	// Finding the remainder
	// when N is divided by 3
	ll x = N % 3;
	N /= 3;
	if (x < 0)
		N += 1;

	// Recursive function to
	// call the function for
	// the integer division
	// of the value N/3
	convertToTernary(N);

	// Handling the negative cases
	if (x < 0)
		s+= x + (3 * -1)+'0';
	else
		s+=x+'0';
}

// Function to convert the decimal to ternary
ll p(ll base, ll exponent){
    ll result=1;
    while (exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}
void convert(ll Decimal)
{

	// If the number is greater
	// than 0, compute the
	// ternary representation
	// of the number
	if (Decimal != 0) {
		convertToTernary(Decimal);
	}
	else
		s+="0";
}


void solve(){
    ll n;
    cin>>n;
    s="";
    convert(n);
    //cout<<"s"<<s<<endl;
    bool verif=false;
    ll cnt=s.size();
    for (ll i=s.size()-1;i>=0;i--){
        if (s[i]=='2'){
            verif=true;
            cnt=min(i,cnt);
        }
    }
    //cout<<s.size()<<endl;
    if (verif){
        ll nbr=-1;
        ll v=0;
        for (ll i=cnt;i>=0;i--){
            if (s[i]=='0'){
                nbr=p(3,s.size()-i-1);
                v=i;
                //cout<<i<<endl;
                break;
            }
        }
        if (nbr==-1)
            nbr=p(3,s.size());
        for (ll i=v-1;i>=0;i--){
           // cout<<s[i]-'0'<<" ";
            nbr+=(s[i]-'0')*p(3,s.size()-i-1);
        }
        cout<<nbr<<endl;


        //cout<<pow(3,s.size())<<endl;
        return;
    }
    cout<<n<<endl;
    return;
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
