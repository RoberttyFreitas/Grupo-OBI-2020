#include <bits/stdc++.h>

using namespace std;

#define MAXN 100

int matriz[MAXN][MAXN];
int pd[MAXN][MAXN];

int N;

int solve(int i, int j){
	if(i == j) return matriz[0][i];
	
	if(pd[i][j] != -1) return pd[i][j];
	
	int l = j - i;
	int soma = 0;
	
	for(int k = i; k <= j; k++){
		soma += matriz[l][k];
	} 
	
	pd[i][j] = soma + min(solve(i + 1, j), solve(i, j - 1));
	return pd[i][j];
}

int main(){
	
	memset(pd, -1, sizeof(pd));
	
	cin >> N;
	
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			cin >> matriz[i][j];
		}
	}
	
	cout << solve(0, N-1) << endl;
	
	return 0;
}
