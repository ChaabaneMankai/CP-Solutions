#include <iostream>
#include <string>

using namespace std;

int pre[100001], n = 1, what[100001], k, val[100001] = {0}, for_a[100001],x;

void build(){
	pre[0] = 0;
	val[0] = 0;
	string s;
	cin >> x >> k >> s;

	for(int j = 0; j < x; j++){
		char temp = s[j];
		int counts = 0;
		while(j < x && temp == s[j]){
			counts++;
			j++;
		}
		j--;
		what[n] = (temp == 'a') ? 0 : 1;
		val[n] = counts;
		n++;
	}

	for(int j = 1; j < n; j++)
		if(what[j] == 1) pre[j] = pre[j-1] + val[j];
		else pre[j] = pre[j-1];

	for_a[0] = 0;
	for(int j = 1; j < n; j++)
		if(what[j] == 0) for_a[j] = for_a[j - 1] + val[j];
		else for_a[j] = for_a[j - 1];

	return;
}

void print(){
    cout << "what : ";
    for(int j = 0; j < x; j++)
        cout << what[j] << " ";
    cout << endl << "val : ";
    for(int j = 0; j < x; j++)
        cout << val[j] << " ";
    cout << endl << "for_a : ";
    for(int j = 0; j < x; j++)
        cout << for_a[j] << " ";
    cout << endl << "pr : ";
    for(int j = 0; j < x; j++)
        cout << pre[j] << " ";
    cout << endl;
    return;
}

int foo(int l, int r, int start, int flag){
	if(l == r) return l;
	int mid = (l+r)/2;
	if(flag){
		if(for_a[mid] - start >= k) return foo(l, mid, start, flag);
		return foo(mid+ 1, r, start, flag);
	}
	if(pre[mid] - start >= k) return foo(l, mid, start, flag);
	return foo(mid+1, r, start, flag);
}

int if_a(){
	int ans = 0;
	int j = (what[1] == 0)? 1 : 2;

	for(; j < n; j += 2){
		int pos = foo(j, n -1, pre[j], 0);
		while(pos < n && pre[pos] - pre[j] <= k)
			pos ++;
		int curr = pre[pos - 1] - pre[j - 1] + for_a[pos - 1] - for_a[j - 1];
		int remains = k - (pre[pos - 1] - pre[j - 1]);
		int extra = 0;
		if(remains){
			if(val[pos] >= remains && what[pos] == 1){
				extra += remains;
				remains = 0;
			}
			else if(what[pos] == 1){
				remains -= val[pos];
				extra += val[pos];
			}

			if(val[j - 1] >= remains){
				extra += remains;
				remains = 0;
			}
			else{
				extra += val[j - 1];
				remains -= val[j - 1];
			}
		}
		curr += extra;
		if(ans < curr) ans = curr;
	}
	return ans;
}

int if_b(){
	int ans = 0;
	int j = (what[1] == 1)? 1 : 2;

	for(; j < n; j += 2){
		int pos = foo(j, n -1, for_a[j], 1);
		while(pos < n && for_a[pos] - for_a[j] <= k)
			pos ++;
		int curr = pre[pos - 1] - pre[j - 1] + for_a[pos - 1] - for_a[j - 1];
		int remains = k - (for_a[pos - 1] - for_a[j - 1]);
		int extra = 0;
		if(remains){
			if(val[pos] >= remains && what[pos] == 0){
				extra += remains;
				remains = 0;
			}
			else if(what[pos] == 0){
				remains -= val[pos];
				extra += val[pos];
			}

			if(val[j - 1] >= remains){
				extra += remains;
				remains = 0;
			}
			else{
				extra += val[j - 1];
				remains -= val[j - 1];
			}
		}
		curr += extra;
		if(ans < curr) ans = curr;
	}
	return ans;
}

int main(){
	build();
	//print();
	int ans = max(if_a(), if_b());
	//print();
	cout << ans << endl;
	return 0;
}
