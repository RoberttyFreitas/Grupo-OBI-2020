#include <bits/stdc++.h>

using namespace std;

#define MAXPECAS 10001

int vi[MAXPECAS];
int pi[MAXPECAS];

int n, peso;

int solve(int i, int p){
	if(i == n) return 0;
	if(pi[i] <= p){
		return max(solve(i + 1, p - pi[i]) + vi[i], solve(i + 1, p));
	}else{
		return solve(i + 1, p);
	} 
}

int main(){
	
	cin >> n >> peso;
	
	for(int i = 0; i < n; i++){
		cin >> vi[i] >> pi[i];
	}
	
	cout << solve(0, peso) << endl;
	
	return 0;
}
