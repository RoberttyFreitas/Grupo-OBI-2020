#include <bits/stdc++.h>

using namespace std;

int dp[1010][1010];

int valor[1010];

int N;

int solve(int i, int v){
	
	if(i == N) return 0;
	
	if(v == 0) return dp[i][v] = 1;
	
	int x = 0;
	while(x <= v){
		if(solve(i + 1, v - x)){
			return dp[i][v] = 1;
		}
		x += valor[i];
	}
	
	return dp[i][v] = 0;
}

int main(){
	
	int M;
	
	cin >> N >> M;
	
	for(int i = 0; i < N; i++){
		cin >> valor[i];
	}
	
	if(solve(0, M)){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	
	return 0;
}
