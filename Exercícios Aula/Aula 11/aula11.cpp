#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010
#define MAXM 1010

int N, M;

int v1[MAXN];
int v2[MAXM];

int dp[MAXN][MAXM];

int solve(int i, int j){
	if(i == N or j == M) return 0;
	
	if(dp[i][j] != -1) return dp[i][j];
	
	if(v1[i] == v2[j]){
		dp[i][j] = solve(i + 1, j + 1) + 1;
	}else{
		dp[i][j] = max(solve(i + 1, j), solve(i, j + 1));
	}
	
	return dp[i][j];
}


/* 6 6
 * [3, 5, 1, 7, 3, 5]
 * [4, 1, 3, 8, 7, 5]
*/


int main(){
	
	memset(dp, -1, sizeof(dp));
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> v1[i];
	}
	
	for(int i = 0; i < M; i++){
		cin >> v2[i];
	}
	
	int tam_anc_comum = solve(0, 0);
	
	cout << N - tam_anc_comum << " " << M - tam_anc_comum << endl;
	
	return 0;
}
