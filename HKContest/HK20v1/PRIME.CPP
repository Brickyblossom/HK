#include <bits/stdc++.h>
using namespace std;

signed main()
{
	ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
    
	int k,p; cin >> k >> p;
	int base10 = 1, remain = 0;
	string ans = "";

	while(1){
		remain = (remain + k*base10) % p;
		ans += (char)(k + 48);
		base10 = (base10 * 10) % p;
		if(remain == 0) break;
	}
	
	cout <<ans;
	return 0;
}
