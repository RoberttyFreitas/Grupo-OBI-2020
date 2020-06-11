#include <bits/stdc++.h>

using namespace std;

int pd[1010][11][1010];

int valor[1010];

int N, M;

int solve(int i, int j, int v){
	
	if(v == 0) return 1;
	if(i == N) return 0;
	if(j == 0) return 0;
	
	if(pd[i][j][v] != -1){
		return pd[i][j][v];
	}
	
	if(valor[i] <= v){
		pd[i][j][v] = max(solve(i + 1, j, v), solve(i, j - 1, v - valor[i]));
	}else{
		pd[i][j][v] = solve(i + 1, j, v);
	}
	
	return pd[i][j][v];
}


int main(){
	
	memset(pd, -1, sizeof(pd));
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> valor[i];
	}
	
	if(solve(0, 9, M)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
