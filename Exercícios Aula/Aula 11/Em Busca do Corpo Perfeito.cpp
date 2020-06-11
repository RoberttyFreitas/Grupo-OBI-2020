#include <bits/stdc++.h>

using namespace std;

#define MAXP 2010
#define MAXN 2010

int N, P;

long long int matriz[MAXN][MAXP];

long long int peso[MAXN];
long long int valor_proteico[MAXN];

long long int solve(int i, int j){
	if(i == N) return 0;
	
	if(matriz[i][j] >= 0) return matriz[i][j];
	
	if(peso[i] <= j){
		matriz[i][j] = max(solve(i+1, j - peso[i]) + valor_proteico[i], solve(i+1, j));
	}else{
		matriz[i][j] = solve(i+1, j);
	}
	
	return matriz[i][j];
}

int main(){
	
	memset(matriz, -1, sizeof(matriz));
	
	cin >> P >> N;
	
	for(int i = 0; i < N; i++){
		cin >> peso[i] >> valor_proteico[i];
	}
	
	cout << solve(0, P) << endl;
	
	return 0;
}
