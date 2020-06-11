#include <bits/stdc++.h>

using namespace std;

long long int dp[7][5010];

int v[6] = {2, 5, 10, 20, 50, 100};
int qtd[7];

long long int solve(int i, int valor){
	
	if(valor == 0) return 1ll;
	if(i == 6) return 0ll;
	
	if(dp[i][valor] != -1) return dp[i][valor];
	
	dp[i][valor] = solve(i + 1, valor);
	
	for(int j = 1; j <= qtd[i]; j++){
		if(j * v[i] <= valor){ 
			dp[i][valor] += solve(i + 1, valor - j * v[i]);
		}else{
			break;
		}
	}
	
	return dp[i][valor];
}

int main(){
	
	int S;
	
	memset(dp, -1, sizeof(dp));
	
	cin >> S;
	
	for(int i = 0; i < 6; i++){
		cin >> qtd[i];
	}
	
	cout << solve(0, S) << endl;
	
	return 0;
}
