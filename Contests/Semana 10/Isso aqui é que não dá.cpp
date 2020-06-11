#include <bits/stdc++.h>

using namespace std;

int dp[1010][10010];
int valor[1010];
int N, M;

bitset < 1010 > conju;

int solve(int i, int v){
	
	if(v < 0) return 0;
	conju.set(M - v);
	if(v == 0) return 1;
	if(i == N) return 0;
	
	if(dp[i][v] != -1) return dp[i][v];
	
	int x = 0, val = 0;
	
	while(x <= v){
		dp[i][v] = max(val, solve(i + 1, v - x));
		x += valor[i];
	}
	
	return dp[i][v];
}

int main(){
	
	memset(dp, -1, sizeof(dp));
	conju.reset();
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> valor[i];
	}
	
	solve(0, M);
	
	int res = 0;
	
	for(int i = 1; i < M; i++){
		if(!conju.test(i)){
			res++;
		}
	}
	
	cout << res << endl;
	
	return 0;
}
