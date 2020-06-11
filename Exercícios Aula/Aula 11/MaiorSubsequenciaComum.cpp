#include <bits/stdc++.h>

using namespace std;

#define MAXTAM 1010

int N, M;

int v1[MAXTAM];
int v2[MAXTAM];

int matriz[MAXTAM][MAXTAM];

int solve(int i, int j){
	if(i == N or j == M) return 0;
	
	if(matriz[i][j] >= 0) return matriz[i][j];
	
	if(v1[i] == v2[j]){
		matriz[i][j] = solve(i + 1, j + 1) + 1;
	}else{
		matriz[i][j] = max(solve(i + 1, j), solve(i, j + 1));
	}
	
	return matriz[i][j];
}

/*
 * N = 5
 * [ 1 3 2 5 7]
 * M = 4
 * [ 3 5 7 9 ]
 */

int main(){
	
	memset(matriz, -1, sizeof(matriz));
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> v1[i];
	}
	
	for(int i = 0; i < M; i++){
		cin >> v2[i];
	}
	
	cout << solve(0, 0) << endl;
	
	return 0;
}
