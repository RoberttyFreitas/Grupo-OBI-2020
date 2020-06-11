#include <bits/stdc++.h>

using namespace std;

int dp[1010][1010];
int v[1010];

int N;

int solve(int i, int j){
	if(i == N) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	
	if(v[i] >= v[j]){
		dp[i][j] = max(solve(i + 1, i) + 1, solve(i + 1, j));
	}else{
		dp[i][j] = solve(i + 1, j);
	}
	
	return dp[i][j];
}

int main(){
	
	memset(dp, -1, sizeof(dp));
	
	cin >> N;
	v[0] = 0;
	
	for(int i = 1; i <= N; i++){
		cin >> v[i];
	}
	
	N++;
	
	cout << solve(1, 0) << endl;
	
	return 0;
}
