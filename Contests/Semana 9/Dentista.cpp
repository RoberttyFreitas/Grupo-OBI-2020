#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
	if(a.second < b.second){
		return true;
	}else{
		return false;
	}
}

int main(){
	
	int n, x, y;
	int inicio = -1, ans = 0;
	
	cin >> n;
	
	vector< pair<int, int> > v(n);
	
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		v[i] = make_pair(x, y);
	}
	
	sort(v.begin(), v.end(), comp);
	
	for(int i = 0; i < n; i++){
		if(inicio <= v[i].first){
			inicio = v[i].second;
			ans++;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}
