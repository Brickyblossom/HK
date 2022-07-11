#include <bits/stdc++.h>
using namespace std;

int n,a[20];
bool valid(int x, int last_used_pos){
	if(x < 0) return false;
	if(x == 0) return true;
	
	for(int i = last_used_pos; i < n; ++i){
		if(valid(x-a[i], i+1)) return true;
	}
	return false;
}

signed main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
    
	cin >> n;
	int sum = 0;
	for(int i = 0; i < n; ++i){
		cin >> a[i]; 
		sum += a[i];
	}
	for(int i = 1; i <= sum; ++i){
		if(valid(i,0) == false){
			cout << i; return 0;
		}
	}
	cout << sum + 1;
	return 0;
}
