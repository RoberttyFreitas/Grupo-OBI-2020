#include <bits/stdc++.h>

using namespace std;

int cont_bits(long long int x){
	int cont = 0;
	while(x > 0){
		x -= (x&-x);
		cont++;
	}
	return cont;
}

int main(){
	
	long long int n;
	
	cin >> n;
	
	cout << cont_bits(n) << endl;
	
	return 0;
}
