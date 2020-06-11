#include <bits/stdc++.h>

using namespace std;

long long int pd[1002];

int n, m, k;

int ai[1002];

long long int f(int i){
	
	if(pd[i] != -1){
		return pd[i] % m;
	}
	
	long long int res = 0;
	for(int j = 1; j <= n; j++){
		res += (ai[j] * f(i - j)) % m;
	}
	
	pd[i] = res % m;
	
	return pd[i];
}

int main(){
	
	cin >> n >> k >> m;
	
	for(int i = 1; i <= k; i++){
		pd[i] = -1;
	}
	
	for(int i = 1; i <= n; i++){
		cin >> ai[i];
	}
	
	for(int i = 1; i <= n; i++){
		cin >> pd[i];
	}
	
	cout << f(k) << endl;
	
	return 0;
}
