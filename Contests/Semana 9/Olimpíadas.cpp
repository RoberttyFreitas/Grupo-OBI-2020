#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int N, M, P, O, B;
	
	cin >> N >> M;
	
	vector< pair< pair<int, int>, pair<int, int> > > v (N, make_pair(make_pair(0, 0), make_pair(0, 0)));
	
	for(int i = 0; i < N; i++){
		v[i].second.second = N - i;
	}
	
	for(int i = 0; i < M; i++){
		cin >> O >> P >> B;
		v[O - 1].first.first += 1;
		v[P - 1].first.second += 1;
		v[B - 1].second.first += 1;
	}
	
	sort(v.begin(), v.end());
	
	for(int i = N-1; i >= 0; i--){
		cout << N - v[i].second.second + 1  << " ";
	}
	cout << endl;
	
	return 0;
}
