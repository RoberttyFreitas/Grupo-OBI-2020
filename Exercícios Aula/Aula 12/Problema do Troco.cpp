#include <bits/stdc++.h>

using namespace std;

#define MAXN 10010
#define MAXX 10010

int dp[MAXN][MAXX];

int N;
int v[MAXN];

int solve(int i, int valor){
	
	if(valor == 0) return 1;
	
	if(i == N) return 0;
	
	if(dp[i][valor] != -1) return dp[i][valor];
	
	if(v[i] <= valor){
		dp[i][valor] = max(solve(i + 1, valor - v[i]), solve(i + 1, valor));
	}else{
		dp[i][valor] = solve(i + 1, valor);
	}
	
	return dp[i][valor];
}

/*
 * 3 5
 * 2 4 3
*/

/*
 * 3 6
 * 3 4 5
*/

int main(){
	
	memset(dp, -1, sizeof(dp));
	
	int valor;
	
	cin >> N >> valor;
	
	for(int i = 0; i < N; i++){
		cin >> v[i];
	}
	
	cout << solve(0, valor) << endl;
	
	return 0;
}
