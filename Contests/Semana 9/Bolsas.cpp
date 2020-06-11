#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, t, d, s = 0, ans = 0;
	
	vector< pair<int, int> > v;
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		cin >> t >> d;
		v.push_back(make_pair(d, t));
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < N; i++){
		ans = max(ans, max(0, s + v[i].second - v[i].first));
		s += v[i].second;
	}
	
	cout << ans << endl;
	
	return 0;
}
